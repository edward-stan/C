#include<stdio.h>
void fun(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("交换后的值为：%d,%d",a,b);
}

int main(){
	int i,j;
	printf("请输入两个整数：");
	scanf("%d%d",&i,&j);
	fun(i,j);
}
