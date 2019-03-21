#include <stdio.h>
#include <stdlib.h>//malloc和NULL的函数
#define maxsize 50//顺序表能用的总空间大小
//createlist函数调用完回到主函数时把L表分配的空间的地址返回，回收
//给s表，让s表使用到L表的空间
//如果不给return，L变量在退出子函数时就回收了。空间丢失
//Sqlist *是指针函数
typedef struct List
{
    int date[maxsize];//借助数组这样的连续空间来充当顺序表的空间
    int length;//顺序表实际已经存储的数据元素个数

}Sqlist;
Sqlist * createlist(Sqlist *L,int n)//创建一个含有n个元素的顺序表L
{
    int i;
    L=(Sqlist *)malloc(sizeof(Sqlist));//动态分配，函数结束空间会消除
    if(L==NULL)
    {
        printf("内存空间不足，分配失败");
        exit(0);//结束整个程序
    }
    printf("请输入%d个数据元素",n);
    for(i=0;i<n;i++)//循环n次对顺序表输入初始数据
        scanf("%d",&L->date[i]);
    L->length=n;
    return L;
}
void listinsert(Sqlist *L,int i,int e)//在表L的第i个位置插入一个e
{
    int j;
    if(i<1 || i>L->length+1)
    {
        printf("插入位置不合法!\n");
        return;//退出当前函数，回到主函数
    }
    for(j=L->length-1;j>=i-1;j--)//从第length个开始到第i个位置，依次往后移
        L->date[j+1]=L->date[j];
    L->date[i-1]=e;
    L->length++;
}
void ListDelete(Sqlist *L,int i)//删除表L中的第i个元素
{
    int j;
    if(i<1 || i>L->length)
    {
        printf("删除位置不合法!\n");
        return;//退出当前函数，回到主函数
    }
    for(j=i;j<=L->length-1;j++)
        L->date[j-1]=L->date[j];
    L->length--;
}
int main()
{
    Sqlist *S=NULL;//实参
    int m,x,y;//实参
    int i;
    printf("请输入初始长度");
    scanf("%d",&m);
    S=createlist(S,m);//把子函数送回的地址给s
    for(i=0;i<S->length;i++)
        printf("%d",S->date[i]);
    printf("\n请输入要插入的位置\n");
    scanf("%d",&x);
    printf("请输入要插入的元素的值\n");
    scanf("%d",&y);
    listinsert(S,x,y);
    printf("现在的顺序表为：");
    for(i=0;i<S->length;i++)
        printf("%d,",S->date[i]);
    printf("\n请输入要删除的位置\n");
    scanf("%d",&x);
    ListDelete(S,x);
    printf("现在的顺序表为：");
        for(i=0;i<S->length;i++)
    printf("%d,",S->date[i]);
    return 0;
}