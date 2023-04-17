#include <stdio.h>

int main ()
{   
    /*Definición de variables*/

    int num[50];/*Variable que almacenará los resultados obtenidos dentro de la serie 
    de fibonacci asignando una posición a cada número y de este modo crear recursividad.*/

    short int count = 0;//Contador que almacenará la cantidad de números presentes entre 1000 y 2000
    int max = 2000;//Cantidad máxima para realizar la búsqueda.
    int min = 1000;//Cantidad mínima para realixar la búsqueda.
    int cant_ = 0;//Varable que amlacenará cada resultado de la serie de fibonacci.

    /*Texto informativo x cada ejercicio*/
    printf("            \nEJERCICIO 43\n");
    printf("Serie numerica:     ");

    for(int i = 1; cant_ < max; i++)
    {
        if (i == 1 || i == 2)/*Condición 'if' que asigna el valor de 1, para las dos primeras
        posiciones de la serie de fibonacci.*/
        {
            num[i] = 1;
        }
        else
        {//Case 'else'

            num[i] = num[i-1] + num[i-2];//Procedimiento para calcular la serie de fibonacci.
            cant_ = num[i];//Asignación de 'num[i]' a la variable 'cant_'

            if (cant_ > min && cant_ < max)/*Condición 'if' que verifica que los resultados de
            fibonacci se encuentren dentro del rango de 'min' y 'max'*/
            {
                count++;/*Contador*/
                break;/*Rompe el bucle for y pasa a la siguiente instrucción inmediata*/
            }
        }

        printf("%d ", num[i]);/*Impresión de serie de fibonacci*/
    }
    
    /*Impresión de la cantidad de números de fibonacci presentes entre 'min' y 'max'*/
    printf("\nLa cantidad de NUMEROS de la serie de fibonacci entre 1000 y 2000 son %d", count);

    return 0;
}