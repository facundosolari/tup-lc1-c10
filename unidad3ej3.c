#include <stdlib.h>
#include <stdio.h>
int main ()
{
   int numero;
   printf ("Ingrese un numero\n");
   scanf ("%i", &numero);
   if (numero < 0)
   {
    printf ("%i es un numero negativo", numero);
   }
   else if (numero > 0)
   {
    printf ("%i es un numero positivo", numero);
   }
   else 
   {
    printf ("Es 0");
   }
   system ("pause");
   return 0;
}
