#include <stdio.h>  //me permite llamar a la funcion printf
#include <stdlib.h> //me permite llamar a la funcion system
#include <math.h>
int main ()
{
float lado1, lado2, hipotenusa, perimetro, superficie;
printf("Ingrese dos lados de un triángulo rectángulo\n");
scanf("%f", &lado1);
scanf("%f", &lado2);
hipotenusa = sqrt ((pow (lado1,2) + pow (lado2,2)));
superficie = (lado1*lado2)/2;
perimetro = lado1 + lado2 + hipotenusa;
printf("El perimetro del triangulo es %f, el area es %f y la hipotenusa es %f", perimetro, superficie, hipotenusa);
system ("pause");
return 0;
}