#include <stdlib.h>
#include <stdio.h>
int main()

{
    int numero1, numero2;
    printf("Ingrese dos numeros \n");
    scanf("%i", &numero1);
    scanf("%i", &numero2);
    if (numero1 > numero2)
    {
        printf("%i es mayor que %i", numero1, numero2);
    }
    else if (numero2 > numero1)
    
    {
        printf("%i es mayor que %i", numero2, numero1);
    }
    else 
    {
        printf ("Los numeros son iguales\n");
    }
    system("pause");
    return 0;
}
