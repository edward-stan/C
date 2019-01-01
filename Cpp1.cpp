#include <stdio.h>
long Fbnl(int N)  
{
    int  a1 = 0;
    int  a2 = 1;
    int  a3 = N;
    printf("  0  ");
    for (int i = 2; i <N; i++)
    {

        printf("%2d  ", a2);
        a3 = a2 + a1;
        a1= a2;
        a2 = a3;

    }
    printf("\n");
    return a3;
}
