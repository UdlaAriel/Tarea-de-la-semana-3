#include <stdio.h>

int main ()
{
    /*Definici´pon*/
    int max = 100;

    for (int i = 1; i <= max; i++)
    {
        printf("%d ", i);//Impresión de los números comprendidos entre 1 y 100.
        if(i%10 == 0) printf("\n");//Salto de línea por cada 10 números ingresados.
    }
    return 0;
}