#include <stdio.h>
#include <stdlib.h>//malloc��NULL�ĺ���
#define maxsize 50//˳������õ��ܿռ��С
//createlist����������ص�������ʱ��L�����Ŀռ�ĵ�ַ���أ�����
//��s����s��ʹ�õ�L��Ŀռ�
//�������return��L�������˳��Ӻ���ʱ�ͻ����ˡ��ռ䶪ʧ
//Sqlist *��ָ�뺯��
typedef struct List
{
    int date[maxsize];//�������������������ռ����䵱˳���Ŀռ�
    int length;//˳���ʵ���Ѿ��洢������Ԫ�ظ���

}Sqlist;
Sqlist * createlist(Sqlist *L,int n)//����һ������n��Ԫ�ص�˳���L
{
    int i;
    L=(Sqlist *)malloc(sizeof(Sqlist));//��̬���䣬���������ռ������
    if(L==NULL)
    {
        printf("�ڴ�ռ䲻�㣬����ʧ��");
        exit(0);//������������
    }
    printf("������%d������Ԫ��",n);
    for(i=0;i<n;i++)//ѭ��n�ζ�˳��������ʼ����
        scanf("%d",&L->date[i]);
    L->length=n;
    return L;
}
void listinsert(Sqlist *L,int i,int e)//�ڱ�L�ĵ�i��λ�ò���һ��e
{
    int j;
    if(i<1 || i>L->length+1)
    {
        printf("����λ�ò��Ϸ�!\n");
        return;//�˳���ǰ�������ص�������
    }
    for(j=L->length-1;j>=i-1;j--)//�ӵ�length����ʼ����i��λ�ã�����������
        L->date[j+1]=L->date[j];
    L->date[i-1]=e;
    L->length++;
}
void ListDelete(Sqlist *L,int i)//ɾ����L�еĵ�i��Ԫ��
{
    int j;
    if(i<1 || i>L->length)
    {
        printf("ɾ��λ�ò��Ϸ�!\n");
        return;//�˳���ǰ�������ص�������
    }
    for(j=i;j<=L->length-1;j++)
        L->date[j-1]=L->date[j];
    L->length--;
}
int main()
{
    Sqlist *S=NULL;//ʵ��
    int m,x,y;//ʵ��
    int i;
    printf("�������ʼ����");
    scanf("%d",&m);
    S=createlist(S,m);//���Ӻ����ͻصĵ�ַ��s
    for(i=0;i<S->length;i++)
        printf("%d",S->date[i]);
    printf("\n������Ҫ�����λ��\n");
    scanf("%d",&x);
    printf("������Ҫ�����Ԫ�ص�ֵ\n");
    scanf("%d",&y);
    listinsert(S,x,y);
    printf("���ڵ�˳���Ϊ��");
    for(i=0;i<S->length;i++)
        printf("%d,",S->date[i]);
    printf("\n������Ҫɾ����λ��\n");
    scanf("%d",&x);
    ListDelete(S,x);
    printf("���ڵ�˳���Ϊ��");
        for(i=0;i<S->length;i++)
    printf("%d,",S->date[i]);
    return 0;
}