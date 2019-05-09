#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
}BTNode;

BTNode*CreateBTree(BTNode*T)
{
	int a;
	scanf("%d",&a);
	if(a==-1)
		T=NULL;
	else{
	T=(BTNode*)malloc(sizeof(BTNode));
	T->data=a;
	T->lchild=CreateBTree(T->lchild);//递归创建左子树
	T->rchild=CreateBTree(T->rchild);//递归创建右子树 
}
	return T;
}

void PreOrder(BTNode*T)
{
	if(T!=NULL)			//回溯条件 
	{	
		printf("\t%d",T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

int size(BTNode*T) //结点个数 
{
	if(T!=NULL)
	return 1+size(T->lchild)+size(T->rchild);	
	else
		return 0; 
}

int size1(BTNode*T) //叶结点个数 
{
	if(T!=NULL)//判断结点 
	{
		if(T->lchild!=NULL||T->rchild!=NULL)//判断非叶节点 
			return 0+size1(T->lchild)+size1(T->rchild);	
		else
			return 1;	
	}
	else
		return 0; 
}

int size2(BTNode*T) //非叶结点个数 
{
	if(T!=NULL&&(T->lchild!=NULL||T->rchild!=NULL))//判断非叶节结点 
	return 1+size2(T->lchild)+size2(T->rchild);	
	else
		return 0; 
}
int main(){
	
	BTNode*t=NULL;
	printf("请输入数据创建二叉树（输入-1表示空指针）：");
	t=CreateBTree(t);
	printf("创建的二叉树为（先序序列）：");
	PreOrder(t);
	//printf("\n该二叉树的结点总数为：%d\n",size(t)); 
	//printf("\n该二叉树的叶结点总数为：%d\n",size1(t));
	printf("\n该二叉树的非叶结点总数为：%d\n",size2(t)); 
	return 0;
}
