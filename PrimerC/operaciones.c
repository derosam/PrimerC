
#include <stdio.h>

int main()
{
    float num1,num2,suma,resta,multiplicacion,division;
    
    
    printf("Escribe 2 numeros \n");
    scanf("%f %f",&num1,&num2);
    
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    
    printf("La suma de los numeros es %.2f\nLa resta es %.2f\nLa multiplicacion %.2f\nLa division %.2f\nGracias por usar el programa\n",suma,resta,multiplicacion,division);
    
    return 0;
}
