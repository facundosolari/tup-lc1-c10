#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int mes;
 printf ("Ingrese el mes correspondiente a su numero cronologico\n");
 scanf ("%i",&mes);
 switch (mes)
 {
 case 1:
    printf("Tu mes es Enero\n");
    break;
 case 2:
    printf("Tu mes es Febrero\n");
    break;
    case 3:
    printf("Tu mes es Marzo\n");
    break;
    case 4:
    printf("Tu mes es Abril\n");
    break;
    case 5:
    printf("Tu mes es Mayo\n");
    break;
    case 6:
    printf("Tu mes es Junio\n");
    break;
    case 7:
    printf("Tu mes es Julio\n");
    break;
    case 8:
    printf("Tu mes es Agosto\n");
    break;
    case 9:
    printf("Tu mes es Septiembre\n");
    break;
    case 10:
    printf("Tu mes es Octubre\n");
    break;
    case 11:
    printf("Tu mes es Noviembre\n");
    break;
    case 12:
    printf("Tu mes es Diciembre\n");
    break;
 default:
 printf ("El numero es inexistente en el calendario\n");
    break;
 }
    system ("pause");
    return 0;
}