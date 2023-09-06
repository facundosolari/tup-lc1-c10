#include <stdlib.h>
#include <stdio.h>
int main()
{
    float sueldo, horastrabajadas, valorhora;
    printf("Ingrese las horas trabajadas\n");
    scanf("%f",&horastrabajadas);
    valorhora = 800;
    sueldo = horastrabajadas * valorhora;
    printf("El sueldo tuyo es %f",sueldo);
    system ("pause");
    return 0;

}