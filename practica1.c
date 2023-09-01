
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lad1, lad2, hipotenusa, perimetro, superficie;
    
    printf("Ingrese un lado del triangulo recto\n");
    scanf("%f", &lad1);

    printf("Ingrese el segundo lado del triangulo recto\n");
    scanf("%f", &lad2);

    hipotenusa = sqrt((lad1*lad1)+(lad2*lad2));
    perimetro = lad1 + lad2 + hipotenusa;
    superficie = (lad1*lad2)/2;

    printf("La hipotenusa es: %f\n", hipotenusa);
    printf("El perimetro es: %f\n", perimetro);
    printf("La superficie es: %f\n", superficie);

    system("pause");

}
