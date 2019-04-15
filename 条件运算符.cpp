#include<stdio.h>

int main(){
	int day,fee;
	printf("请输入想要购买的天数：\n");
	scanf("%d",&day);
	fee=(day<30)?day*1:day*0.75;
	printf("应付费用为：%d\n",fee);
	return 0;
}
