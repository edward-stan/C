#include<stdio.h>
int main(){
	int i,j;
	int a[10];
	int Z,D,T;
	int max;
	printf("��ֱ�����ѧ���������ɼ��������ɼ��������ɼ���\n");
	for(i=0;i<10;i++)
	{
		printf("\n�������%dλѧ�������ɼ���",i);
		scanf("%d",&Z);
		
		printf("�������%dλѧ�������ɼ���",i);
		scanf("%d",&D);
		
		printf("�������%dλѧ�������ɼ���",i);
		scanf("%d",&T);
		
		a[i]=Z+D+T;
	}
	
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				max=a[j+1];
				a[j+1]=a[j];
				a[j]=max;	
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
