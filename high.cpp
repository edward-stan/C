#include<stdio.h>
#define HEG 0.54

float height(float father,float mother);
int main()
{
	float father;
	float mother;
	float son;

	printf("请输入母亲的身高:\n");
	scanf("%f",&father);

	printf("请输入父亲的身高:\n");
	scanf("%f",&mother);

	son=height(father,mother);
	printf("预测儿子的身高:");
	printf("%.2f\n",son);
	return 0;
}

float height(float father,float mother)
{
	float son =(father+mother)*HEG;
	return son;
}

