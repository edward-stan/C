#include<stdio.h>
int main(){
	int numb[3],m;
	printf("请输入电话号码：\n");
	
	for(m=0;m<3;m++){
		scanf("%d",&numb[m]);
	}
	printf("用户的电话号码分别是：\n");
	for(m=0;m<3;m++){
		printf("%d\t",numb[m]);
	} 
	return 0;
} 
