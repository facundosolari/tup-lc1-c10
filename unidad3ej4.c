#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Ingrese tres numeros\n");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%i es el numero mas grande", num1);
    }
    else if (num2 > num3 && num2 > num1)
    {
        printf("%i es el numero mas grande", num2);
    }
    else
    {
        printf("%i es el numero mas grande", num3);
    }
    system("pause");
    return 0;
}