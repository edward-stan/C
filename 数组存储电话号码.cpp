#include<stdio.h>
int main(){
	int numb[3],m;
	printf("������绰���룺\n");
	
	for(m=0;m<3;m++){
		scanf("%d",&numb[m]);
	}
	printf("�û��ĵ绰����ֱ��ǣ�\n");
	for(m=0;m<3;m++){
		printf("%d\t",numb[m]);
	} 
	return 0;
} 
