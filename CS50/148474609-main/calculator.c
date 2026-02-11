#include <cs50.h>
#include <stdio.h>
int main (void)
{
    //pedir ao usuario pelo x
    float x = get_float("x: ");
    // pedir ao usuario pelo y
    float y = get_float("y: ");
//dividir x por y
    float z = x / y;

    //somar os dois
    printf("%.2f\n", z);

}

//get_int numeros inteiros até 2 bilhoes 32 bits (curtos)
// get_long numeros longos acima de 2 bilhoes 64bits (longos)
//get_float nuumeros flutuantes
//%.2f dois numeros decimais
