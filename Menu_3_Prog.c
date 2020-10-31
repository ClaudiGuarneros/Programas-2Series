#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
        int op,n,i,s,c,terminos, c2=0;
        float pi=0;
        bool resta_serie = true;

        do
        {
            printf("\n\tSeleccione el numero del programa que desea ejecutar\n\n");
            printf("\t1.Figuras con asteriscos\n");
            printf("\t2.Secuencia de valores\n");
            printf("\t3.Valor de pi\n");
            printf("\t4.Salir\n");
            scanf("%d",&op);
            system("cls");

            switch(op)
            {
                case 1: printf("PROGRAMA PARA MOSTRAR 4 FIGURAS DIFERENTES:\n\n");
                        int na=1,a,i,e,ne;
                        for(i=1;i<=10;i++)
                        {
                            for(a=1;a<=na;a++)
                            {
                                printf("*");
                            }
                            printf("\n");
                            na=na+1;
                        }
                        printf("\n\n");
                        na=10;
                        for(i=1;i<=10;i++)
                        {
                            for(a=1;a<=na;a++)
                            {
                                printf("*");
                            }
                            printf("\n");
                            na=na-1;
                        }
                        printf("\n\n");
                        na=10;
                        ne=0;
                        for(i=1;i<=10;i++)
                        {
                            for(e=0;e<=ne;e++)
                            {
                                printf(" ");
                            }
                            for(a=1;a<=na;a++)
                            {
                                printf("*");
                            }

                            printf("\n");
                            na=na-1;
                            ne=ne+1;
                        }
                        printf("\n\n");
                        na=1;
                        ne=10;
                        for(i=1;i<=10;i++)
                        {
                            for(e=1;e<=ne;e++)
                            {
                                printf(" ");
                            }
                            for(a=1;a<=na;a++)
                            {
                                printf("*");
                            }
                            printf("\n");
                            na=na+1;
                            ne=ne-1;
                        }
                        break;

                case 2: printf("PROGRAMA PARA CALCULAR UNA SECUENCIA DE VALORES\n");
                        printf("Cuantos mumeros quieres que muestren las series:\n");
                        scanf("%d",&n);
                        printf("Secuencia a:\n");
                        s=1;
                        for(c=1;c<=n;c++)
                        {
                            printf("%d ",s);
                            s=s+2;
                        }
                        printf("\nSecuencia b:\n");
                        s=2;
                        for(c=1;c<=n;c++)
                        {
                            printf("%d ",s);
                            s=s+3;
                        }
                        printf("\nSecuencia c:\n");
                        s=30;
                        for(c=1;c<=n;c++)
                        {
                            printf("%d ",s);
                            s=s-10;
                        }
                        printf("\nSecuencia d:\n");
                        s=15;
                        for(c=1;c<=n;c++)
                        {
                            printf("%d ",s);
                            s=s+8;
                        }
                        break;
                case 3: printf("\n\tIngrese la cantidad de terminos que desea usar\n\tTerminos= ");
                        scanf("%d", &terminos);
                        for (float c1=1; c1<=terminos; c1=c1+2)
                        {
                            if (resta_serie==true)
                            {
                                pi=pi+(4/c1);
                                resta_serie=false;
                            }
                            else{
                                pi=pi-(4/c1);
                                resta_serie=true;
                            }
                        }

                        printf("el valor de pi es: %f", pi);
                        break;
            }

        }while ( op != 4 );


}
