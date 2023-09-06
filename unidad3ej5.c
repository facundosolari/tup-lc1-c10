#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero\n");
    scanf("%i", &num);
    if ((num % 2) == 0) //si uso % me guarda el resto de la divison
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }

    system("pause");
    return 0;
}