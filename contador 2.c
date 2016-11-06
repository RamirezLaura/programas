#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
   int temp,i=0;
    float prom,sumaTemp=0;

    printf("\n Temperatura de procesador\n");
    fflush(stdin);
    printf("\n Ingrese temp\n");
    scanf("%i",&temp);

    while(temp!=0)
    {
    if(temp!=0)
    printf("\n ingresar otro valor (fin con cero)\n");
   scanf("%i",&temp);
    {i++;}
   sumaTemp=temp+sumaTemp;

   }
    prom=sumaTemp/i;
    printf("\nLa suma es %.2f El promedio es %.2f\n",sumaTemp,prom);
    getch();
    return 0;
}
