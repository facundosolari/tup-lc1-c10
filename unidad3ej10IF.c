#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mes;
    printf("Ingrese el numero acorde al calendario de los meses\n");
    scanf("%i", &mes);
    if (mes == 1)
    {
        printf("Tu mes es Enero\n");
    }
    else if (mes == 2)
    {
        printf("Tu mes es Febrero\n");
    }
    else if (mes == 3)
    {
        printf("Tu mes es Marzo\n");
    }
    else if (mes == 4)
    {
        printf("Tu mes es Abril\n");
    }
    else if (mes == 5)
    {
        printf("Tu mes es Mayo\n");
    }
    else if (mes == 6)
    {
        printf("Tu mes es Junio\n");
    }
    else if (mes == 7)
    {
        printf("Tu mes es Julio\n");
    }
    else if (mes == 8)
    {
        printf("Tu mes es Agosto\n");
    }
    else if (mes == 9)
    {
        printf("Tu mes es Septiembre\n");
    }
    else if (mes == 10)
    {
        printf("Tu mes es Octubre\n");
    }
    else if (mes == 11)
    {
        printf("Tu mes es Noviembre\n");
    }
    else if (mes == 12)
    {
        printf("Tu mes es Diciembre\n");
    }
    else
    {
        printf("El numero no corresponde al calendario de los meses\n");
    }

    system("pause");
    return 0;
}