#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,c;
    printf("PROGRAMA PARA CUALCULAR UNA SUCESION DE NUMEROS\n");
    printf("Dame un numero: ");
    scanf("%d",&n);
    x=n*n;
    c=x-(2*n);
    while(x>=c)
    {
        printf("\t%d\n",x);
        x=x-2;
    }

}
