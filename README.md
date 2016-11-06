# programas
código c
Programa numeros exponentes
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,base,expo,potencia=1;
    printf("\n Programa numeros exponentes\n");
    printf("\n Ingrese numero base\n");
    scanf("%i",&base);
    printf("\n Ingrese valor de exponente\n");
    scanf("%i",&expo);
    for (j=0; j<expo; j++)
    potencia=potencia*base;
    printf("\n La potencia es:%d \n",potencia);
    system("PAUSE");
    return 0;
}
