#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, producto, suma, resta;
    printf("Ingrese dos numeros\n");
    scanf("%i",&num1);
    scanf("%i",&num2);
    producto = num1 * num2;
    suma = num1 + num2;
    resta = num1 - num2;
    printf("La suma de los numeros es %i, la resta es %i y el producto entre ambos es %i", suma, resta, producto);
    system ("pause");
    return 0;

}