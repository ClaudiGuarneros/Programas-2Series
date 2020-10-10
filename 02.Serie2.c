#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,x;
    printf("PROGRAMA PARA UNA SUCESION DE NUMEROS");
    printf("Dame un numero:");
    scanf("%d",&n);
    x=n*3;
    c=(7*n)+2;
    while (x<=c)
    {
        printf("\t%d\n",x);
        x=x+2;
    }


}
