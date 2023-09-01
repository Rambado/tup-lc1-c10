#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{
    int tiempoTrabajo, sueldo;
    const int valorHora = 800;

    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%i", &tiempoTrabajo);

    sueldo = tiempoTrabajo * valorHora;

    printf("El sueldo es: %i", sueldo);

    system("pause");

}