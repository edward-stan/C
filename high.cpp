#include<stdio.h>
#define HEG 0.54

float height(float father,float mother);
int main()
{
	float father;
	float mother;
	float son;

	printf("������ĸ�׵����:\n");
	scanf("%f",&father);

	printf("�����븸�׵����:\n");
	scanf("%f",&mother);

	son=height(father,mother);
	printf("Ԥ����ӵ����:");
	printf("%.2f\n",son);
	return 0;
}

float height(float father,float mother)
{
	float son =(father+mother)*HEG;
	return son;
}

