#include<stdio.h>
int main(){
	int i,j;
	int a[10];
	int Z,D,T;
	int max;
	printf("请分别输入学生的智育成绩、德育成绩、体育成绩：\n");
	for(i=0;i<10;i++)
	{
		printf("\n请输入第%d位学生智育成绩：",i);
		scanf("%d",&Z);
		
		printf("请输入第%d位学生德育成绩：",i);
		scanf("%d",&D);
		
		printf("请输入第%d位学生体育成绩：",i);
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
