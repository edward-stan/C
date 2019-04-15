#include<stdio.h>
int main(){
	int grade[10],m;
	printf("请输入每次比赛得分：\n"); 
	for(m=0;m<10;m++){
		scanf("%d",&grade[m]);
	}
	
	int total=0;
	float avg;
	for(m=0;m<10;m++){
		total+=grade[m];
	}
	avg=((float)total/10);
	printf("平均成绩为：%f\n",avg);
	return 0;
}
