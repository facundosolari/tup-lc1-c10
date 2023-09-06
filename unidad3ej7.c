#include <stdlib.h>
#include <stdio.h>
int main()
{
    float mesa;

    printf("Ingrese el valor de la mesa\n");
    scanf("%f", &mesa);

    if (mesa >= 100000)
    {
        mesa = mesa * 0.85; 
        printf("El precio te queda en %f", mesa);
    }
    else if (mesa < 100000 && mesa >= 0)
    {
        mesa = mesa * 0.90; 
        printf("El precio te queda en %f", mesa);
    }
     else 
     {
        printf("El precio no puede ser menor a 0");
     }
    system("pause");
    return 0;
}