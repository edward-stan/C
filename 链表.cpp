#include<stdio.h>
#include<stdlib.h>

typedef struct table
{
	int data;
	struct table*next;
}table1;

table1*Create(table1*L,int n)
{
	table1*p,*t;
	int a[n];
	int i,j,iTemp;
	L=(table1*)malloc(sizeof(table1));
	t=L;
	printf("����������Ԫ�أ�");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				iTemp=a[j-1];
				a[j-1]=a[j];
				a[j]=iTemp;
			}
		}
	}
	
	for(i=0;n>0;n--,i++)
	{
		p=(table1*)malloc(sizeof(table1));
		p->data=a[i];
		t->next=p;
		t=t->next;
	}
	p->next=NULL;
	return L;
}

void tableInsert(table1*L,int e)
{
	table1*t=L,*p;
	while(t->next!=NULL&&t->next->data <e)
	{
		t=t->next;
	}
	
	p=(table1*)malloc(sizeof(table1));
	p->data=e;
	
	p->next=t->next;
	t->next=p;
}
void tabledel(table1*L,int x,int y)
{
	table1*t=L,*q;
	q=t;
	t=t->next;
	if(t==NULL)printf("����Ϊ�գ�");
	else if(x>y){
	printf("��ֵ����\n");
	return;
	}
	while(t!=NULL)
	{
		if(t->data>x&&t->data<y)
		{
			q->next=t->next;
			free(t);
			t=q;
		}
		else
		{
			q=t;
			t=t->next;
		}
	}
	if(x>y){
	printf("��ֵ����\n");
	return;
	}

}

int main(){

	table1*S=NULL,*t;
	int m,a,x,y;
	
	printf("����������ĳ��ȣ�");
	scanf("%d",&m);
	S=Create(S,m);
	printf("�����ĵ�����Ϊ��");
	t=S->next;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	
	printf("\n������Ҫ�����Ԫ��ֵ��");
	scanf("%d",&a);
	tableInsert(S,a);
	
	printf("Ŀǰ������Ϊ��");
	t=S->next;
	while(t!=NULL)
	{
		printf("\t%d\t",t->data);
		t=t->next;
	}
	 
	 printf("\nɾ������xС��y��Ԫ��,x,y��ֵ�ֱ�Ϊ��");
	 scanf("%d%d",&x,&y);
	 tabledel(S,x,y);
	 
	printf("Ŀǰ������Ϊ��");
	t=S->next;
	while(t!=NULL)
	{
		printf("\t%d\t",t->data);
		t=t->next;
	}
	return 0;
}
