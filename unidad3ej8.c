#include <stdlib.h>
#include <stdio.h>
int main()
{
    float saldonuevo, saldoanterior, retiro;
    saldoanterior = 1000;
    printf("Ingrese el monto que quiera retirar\n");
    scanf("%f", &retiro);
    if (retiro <= saldoanterior)
    {
       saldonuevo = saldoanterior - retiro; 
       printf("Su saldo restante es %f", saldonuevo);
    }
    else 
    {
        printf("No se puede hacer el retiro, saldo insuficiente");

    }

    system ("pause");
    return 0;
}