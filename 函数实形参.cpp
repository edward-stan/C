#include<stdio.h>
void Scrip(char*lead);

int main(){
	char cSelect[]="";
	printf("����ѡ���������ǣ�");
	scanf("%s",&cSelect);
	Scrip(cSelect);
	return 0;
	} 

void Scrip(char*lead)
{
	printf("%s��ʼ��������籾\n",lead);
}
