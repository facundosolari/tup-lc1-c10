#include <stdlib.h>
#include <stdio.h>
int main()
{
    double sueldo, horastrabajadas, valorhora;
    printf("Ingrese las horas trabajadas\n");
    scanf("%lf", &horastrabajadas);
    printf("Ingrese el valor de la hora\n");
    scanf("%lf", &valorhora);
    sueldo = horastrabajadas * valorhora;
    printf("El sueldo tuyo es %lf",sueldo);
    system ("pause");
    return 0;
#include <time.h> //libreria de tiempo
}