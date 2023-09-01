#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num1, num2, resultado1, resultado2, resultado3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    resultado1 = num1 + num2;

    resultado2 = num1 * num2;

    resultado3 = num1 - num2;

    printf("El resultado de la suma es: %d\n", resultado1);
    printf("El resultado de la multiplicación es: %d\n ", resultado2);
    printf("El resultado de la resta es: %d\n", resultado3);

    system("pause");



}