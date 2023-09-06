#include <stdio.h>  //me permite llamar a la funcion printf
#include <stdlib.h> //me permite llamar a la funcion system
#include <math.h>
int main()
{
    float ladoA, ladoB, diagonal, superficie, perimetro;

    printf ("ingrese los lados de un rectangulo \n");

    scanf ("%f", &ladoA);

    scanf ("%f", &ladoB);

    diagonal = sqrt (pow(ladoA,2) + pow(ladoB,2));
    perimetro = ladoA + ladoB + diagonal;
    superficie = ladoA * ladoB;

    printf ("diagonal es %f \n , superficie es %f \n y perimetro es %f \n ", diagonal, superficie, perimetro);


    system("pause");
    return 0;
}