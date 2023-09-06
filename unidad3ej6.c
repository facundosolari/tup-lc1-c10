#include <stdlib.h>
#include <stdio.h>
int main()
{
    int nota;
    printf("Ingresar nota\n");
    scanf("%i", &nota);
    if (nota >= 0 && nota < 4)
    {
        printf("Estas reprobado");
    }
    else if (nota >= 4 && nota < 6)
    {
        printf("Estas regular");
    }

    else if (nota >= 6 && nota <=10)
    {
        printf("Tenes aprobacion directa");
    }

  else
    {
        printf("Nota invalida");
    }

    system("pause");
    return 0;
}