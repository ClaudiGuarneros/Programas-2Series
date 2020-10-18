#include <stdio.h>
#include <stdlib.h>

int main()
{


        int op;
        float V;
        float R1;
        float R2;
        float R3;
        float I1;
        float I2;
        float I3;
        float V1;
        float V2;
        float V3;
        char c1,c2,c3;
        float s,p;
        float a,b,c,r,x1,x2;
        int n,x,z;
        do
        {
            printf("\tSeleccione el numero del programa que desea ejecutar\n\n");
            printf("\t1.Circuito 1\n");
            printf("\t2.Leds\n");
            printf("\t3.Calificaciones\n");
            printf("\t4.Ecuacion\n");
            printf("\t5.Serie 1\n");
            printf("\t6.Serie 2\n");
            printf("\t7.Salir\n");
            scanf("%d",&op);
            system("cls");


            switch(op)
            {
                case 1: printf("\tPROGRAMA PARA CUALCULAR LA CORRIENTE Y VOLTAJE DE TRES RESISTENCIAS PARARALES EN UN CIRCUITO\n");
                        printf("\tDame el valor del voltaje \n");
                        scanf("%f", &V);

                        printf("\tDame el valor de la resistencia 1 en Ohms \n");
                        scanf("%f", &R1);

                        printf("\tDame el valor de la resistencia 2 en Ohms\n");
                        scanf("%f", &R2);

                        printf("\tDame el valor de la resistencia 3 en Ohms\n");
                        scanf("%f", &R3);

                        I1=V/R1;
                        I2=V/R2;
                        I3=V/R3;

                        printf("\tLas corrientes son:\n Corriente en la resistencia 1: %f A\n Corriente en la resistencia 2: %f A\n Corriente en la resistencia 3: %f A\n", I1,I2,I3);
                        printf("\tComo sabemos en un circuito en parelo el valor del voltaje en cada resitencia es igual al voltaje de entrada \npor lo tanto en cada resietncia tendriamos un valor de: %f V\n\n\n\n\n",V);
                         break;

                case 2: printf("\tESTE PROGRAMA TE DARA EL VALOR DE UNA RESISTENCIA APARTIR DEL VOLTAJE INICIAL PARA LOS LED\n\tVERDE STD\n\tBLANCO\n\tAZUL BRILLANTE\n");
                        printf("\tDame el valor del voltaje de tu fuente\n");
                        scanf("%f", &V);

                        //LED VERDE STD
                        R1=(V-1.8)/0.015;
                        //LED BLANCO
                        R2=(V-2.8)/0.02;
                        //LED AZUL BRILLANTE
                        R3=(V-3)/0.02;

                        printf("\tPara encender el led VERDE STD necesitas una resistencia de: %f\n", R1);
                        printf("\tPara encender el led BLANCO necesitas una resistencia de: %f\n", R2);
                        printf("\tPara encender el led AZUL BRILLANTE necesitas una resistencia de: %f\n\n\n\n\n", R3);
                        break;
                case 3: printf("\tPROGRAMA PARA OBTENER TU PROMEDIO APARTIR DE TRES CALIFICAIONES DADAS EN LETRAS YA SEAN MAYUSCULAS O MINUSCULAS\n");
                        printf("\tRecuerda teclear tus caificaiones en letras\n");
                        printf("\tDame la calificacion 1: \n");
                        scanf("%s",&c1);
                        if(c1=='A'|| c1=='a')
                        {
                             s=10;
                        }
                        else if (c1=='B'|| c1=='b')
                        {
                            s=9;
                        }
                        else if (c1=='C'|| c1=='c')
                        {
                            s=8;
                        }
                        else if (c1=='D'|| c1=='d')
                        {
                            s=7;
                        }
                        else if (c1=='E'|| c1=='e')
                        {
                             s=6;
                        }
                        else if (c1=='F'|| c1=='f')
                        {
                            s=5;
                        }
                        printf("\tDame la calificacion 2: \n");
                        scanf("%s",&c2);
                        if(c2=='A'|| c2=='a')
                        {
                             s=s+10;
                        }
                        else if (c2=='B'|| c2=='b')
                        {
                            s=s+9;
                        }
                        else if (c2=='C'|| c2=='c')
                        {
                            s=s+8;
                        }
                        else if (c2=='D'|| c2=='d')
                        {
                            s=s+7;
                        }
                        else if (c2=='E'|| c2=='e')
                        {
                             s=s+6;
                        }
                        else if (c2=='F'|| c2=='f')
                        {
                            s=s+5;
                        }
                        printf("\tDame la calificacion 3: \n");
                        scanf("%s",&c3);
                        if(c3=='A'|| c3=='a')
                        {
                             s=s+10;
                        }
                        else if (c3=='B'|| c3=='b')
                        {
                            s=s+9;
                        }
                        else if (c3=='C'|| c3=='c')
                        {
                            s=s+8;
                        }
                        else if (c3=='D'|| c3=='d')
                        {
                            s=s+7;
                        }
                        else if (c3=='E'|| c3=='e')
                        {
                             s=s+6;
                        }
                        else if (c3=='F'|| c3=='f')
                        {
                            s=s+5;
                        }

                        p=s/3;

                        printf("\tTu promedio es de: %f\n\n\n\n\n",p);
                        break;
                case 4: printf("\tPROGRAMA PARA CALCULAR EL VALO DE X PARA ECUACIONES DE SEGUNDO GRADO: ax^2+bx+c\n");
                        printf("\tDame el valor de a: \n");
                        scanf("%f",&a);
                        printf("\tDame el valor de b: \n");
                        scanf("%f",&b);
                        printf("\tDame el valor de c: \n");
                        scanf("%f",&c);

                        r=sqrt((b*b)-(4*a*c));
                        x1=(-b+r)/(2*a);
                        x2=(-b-r)/(2*a);

                        printf("\tEl valor para x1 es :%f\n",x1);
                        printf("\tEl valor para x2 es :%f\n\n\n\n\n",x2);
                        break;
                case 5: printf("\tPROGRAMA PARA CUALCULAR UNA SUCESION DE NUMEROS\n");
                        printf("\tDame un numero: ");
                        scanf("%d",&n);
                        x=n*n;
                        z=x-(2*n);
                        while(x>=z)
                        {
                            printf("\t%d\n",x);
                            x=x-2;
                        }
                        printf("\n\n\n\n\n");
                        break;
                case 6: printf("\tPROGRAMA PARA UNA SUCESION DE NUMEROS\n");
                        printf("\tDame un numero:");
                        scanf("%d",&n);
                        x=n*3;
                        z=(7*n)+2;
                        while (x<=z)
                        {
                            printf("\t%d\n",x);
                            x=x+2;
                        }
                         printf("\n\n\n\n\n");

                }
    }while ( op != 7 );

}
