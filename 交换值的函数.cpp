#include<stdio.h>
void fun(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("�������ֵΪ��%d,%d",a,b);
}

int main(){
	int i,j;
	printf("����������������");
	scanf("%d%d",&i,&j);
	fun(i,j);
}
