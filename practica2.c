#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, resultado;
    
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor\n");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor\n");
    scanf("%d", &num3);

    resultado = num1 + num2 + num3;

    printf("La suma es de los tres numeros es: %d\n", resultado);

    system("pause");

}