#include<stdio.h>

int main(){
	int day,fee;
	printf("��������Ҫ�����������\n");
	scanf("%d",&day);
	fee=(day<30)?day*1:day*0.75;
	printf("Ӧ������Ϊ��%d\n",fee);
	return 0;
}
