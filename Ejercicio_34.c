#include <stdio.h>

int main ()
{
    /*Definición de variables*/
    int i;

    /*Texto informativo x cada ejercicio*/
    printf("            \nEJERCICIO 34\n");
    printf("Serie numerica:   ");

    for (i = 9; i >= 0; i--) //Bucle 'for', que parte de "i = 9", y termina si 'i' es 
    //igual a 0, además, se resta 1 a 'i' x cada iteración hasta que la condición sea falsa.
    {
        printf("%d  ", 10 - i); //Impresión en la pantalla de la sucesión numerica, restandole 'i' a 10 
        //para iniciar desde 1.
    }

    return 0;
}