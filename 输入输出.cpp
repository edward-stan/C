#include<stdio.h>
int main(){
    char c;
    printf("输入一个大写字母: ");
    scanf("%c", &c); 
   // printf("它的ASCII码值为:%d\n",c);
    printf("%c的小写字母为：%c", c,c+32);
    return 0;
}
