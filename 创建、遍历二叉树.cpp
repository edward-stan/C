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
	T->lchild=CreateBTree(T->lchild);//�ݹ鴴��������
	T->rchild=CreateBTree(T->rchild);//�ݹ鴴�������� 
}
	return T;
}

void PreOrder(BTNode*T)
{
	if(T!=NULL)			//�������� 
	{	
		printf("\t%d",T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

int size(BTNode*T) //������ 
{
	if(T!=NULL)
	return 1+size(T->lchild)+size(T->rchild);	
	else
		return 0; 
}

int size1(BTNode*T) //Ҷ������ 
{
	if(T!=NULL)//�жϽ�� 
	{
		if(T->lchild!=NULL||T->rchild!=NULL)//�жϷ�Ҷ�ڵ� 
			return 0+size1(T->lchild)+size1(T->rchild);	
		else
			return 1;	
	}
	else
		return 0; 
}

int size2(BTNode*T) //��Ҷ������ 
{
	if(T!=NULL&&(T->lchild!=NULL||T->rchild!=NULL))//�жϷ�Ҷ�ڽ�� 
	return 1+size2(T->lchild)+size2(T->rchild);	
	else
		return 0; 
}
int main(){
	
	BTNode*t=NULL;
	printf("���������ݴ���������������-1��ʾ��ָ�룩��");
	t=CreateBTree(t);
	printf("�����Ķ�����Ϊ���������У���");
	PreOrder(t);
	//printf("\n�ö������Ľ������Ϊ��%d\n",size(t)); 
	//printf("\n�ö�������Ҷ�������Ϊ��%d\n",size1(t));
	printf("\n�ö������ķ�Ҷ�������Ϊ��%d\n",size2(t)); 
	return 0;
}
