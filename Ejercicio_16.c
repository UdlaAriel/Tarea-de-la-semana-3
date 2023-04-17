#include <stdio.h>
#include <math.h>

int main ()
{
    /*Definición de variables*/
    int num, i = 1;

    /*Definición de variables de almacenamiento de resultados matemáticos*/
    int multiply = 0;
    float sum = 0.00;
    float prom = 0.00;

    /*Texto informativo x cada ejercicio*/
    printf("            \nEJERCICIO 34\n");
    printf("Ingrese un numero, para calcular el promedio de los 'n' primeros multiplos de 3: ");

    scanf("%d", &num);//Asignación de valores para la variable 'num'

    for (i = 1; i <= num; i++)//Inicio del bucle 'for', que nos permitirá calcular la multiplicación 
    //de los 'n' primeros múltiplos de 3, a fin de sumar sus resultados y calcular.

    {
        multiply = i * 3;//Operación matemática (multiplicación) de i x 3.
        sum += multiply;//Asignación del valor obtenido en 'multiply', sumando todos los resultados obtenidos
        //dentro de la variable 'sum'.

        printf("%d ", multiply);//Impresión en la pantalla de los números obtenidos.
    }

    prom = sum/num;//Cálculo del promedio de la suma de los 'n' primeros múltiplos de 3.

    printf("\nPromedio: %.2f", prom);//Impresión en la pantalla de los resultados finales.

    return 0;
}