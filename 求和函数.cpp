#include<stdio.h>
int NumAdd(int num1,int num2)
{
	int result;
	result =num1 + num2;
	return result;
}

int main(){
	int a,b;
	printf("����������������");
	scanf("%d%d",&a,&b);
	printf("���ǵĺ�Ϊ��%d",NumAdd(a,b));
}
