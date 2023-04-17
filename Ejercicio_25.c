#include <stdio.h>

/*Algoritmo que determina la suma y promedio de los dígitos de un número ingresado*/

int main() 
{
    /*Definición de variables*/
    int num, digit;
    float sum = 0.00; //Variable que almacena la suma de los dígitos
    int count = 0; //Variable contador

    /*Texto informativo x cada ejercicio*/
    printf("            \nEJERCICIO 25\n");
    printf("Ingrese un numero entero: ");

    scanf("%d", &num); //Asignación de valor a la variable 'num' por parte del usuario.
    
    while (num > 0) { //Inicio bucle "while", con la condición de 'num' mayor que 0 .
        digit = num % 10; //Definición de la variable digit, que mediante la operación módulo
        //determinará los dígitos presentes dentro del número asignado.

        sum += digit;//Almacenamiento de cada digito encontrado dentro de la variable 'sum' para sumar
        //sus valores con cada iteración.

        count++;//Contador que permite determinar la cantidad de dígitos presentes dentro del número 
        //ingresado.

        num /= 10;//División por 10 a 'num' para ir reduciendo los dígitos del lado derecho.
    }
    
    float prom = sum / count;//Variable que almacenará el resultado de dividir 'sum' con 'count' 
    //a fin de encontrar el valor del promedio.

    printf("PROMEDIO: %.2f", prom);//Impresión de los resultados obtenidos dentro de 'prom'
    
    return 0;
}
