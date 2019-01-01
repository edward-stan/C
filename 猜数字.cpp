#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个数字\n");
	while(num!=147)
	{
		scanf("%d",&num);
		 if(num<147)
		 {
			 printf("你猜小了\n");
		 }
		 else if(num>147)
		 {
			 printf("你猜大了\n");
		 }
		 else if(num==147)
		 {
			 printf("你猜对了\n");
		 }
	}
	return 0;
}