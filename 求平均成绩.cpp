#include<stdio.h>
int main(){
	int grade[10],m;
	printf("������ÿ�α����÷֣�\n"); 
	for(m=0;m<10;m++){
		scanf("%d",&grade[m]);
	}
	
	int total=0;
	float avg;
	for(m=0;m<10;m++){
		total+=grade[m];
	}
	avg=((float)total/10);
	printf("ƽ���ɼ�Ϊ��%f\n",avg);
	return 0;
}
