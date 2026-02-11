#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int n;
    do
    {
        n = get_int("size: "); //qual o tamanho?
    }
    while (n < 1);
// para cada linha
    for(int i = 0; i < n; i++)
    {
        //para cada coluna
        for(int j = 0; j < n; j++)
    {
        //imprime um tijolo
        printf("#");
    }
    //mover para a proxima linha
        printf("\n");
    }
}
