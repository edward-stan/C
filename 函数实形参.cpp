#include<stdio.h>
void Scrip(char*lead);

int main(){
	char cSelect[]="";
	printf("导演选定的主角是：");
	scanf("%s",&cSelect);
	Scrip(cSelect);
	return 0;
	} 

void Scrip(char*lead)
{
	printf("%s开始参演这个剧本\n",lead);
}
