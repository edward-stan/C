#include<stdio.h>
int NumAdd(int num1,int num2)
{
	int result;
	result =num1 + num2;
	return result;
}

int main(){
	int a,b;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("它们的和为：%d",NumAdd(a,b));
}
