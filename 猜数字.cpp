#include<stdio.h>
int main()
{
	int num;
	printf("������һ������\n");
	while(num!=147)
	{
		scanf("%d",&num);
		 if(num<147)
		 {
			 printf("���С��\n");
		 }
		 else if(num>147)
		 {
			 printf("��´���\n");
		 }
		 else if(num==147)
		 {
			 printf("��¶���\n");
		 }
	}
	return 0;
}