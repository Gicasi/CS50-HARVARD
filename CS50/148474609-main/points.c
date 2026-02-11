#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int points = get_int("Quantos pontos você perdeu?");
    const int mine  = 6; // uma CONST variavel que pode mudar a qualquer momento
    // supondo que eu tenha perdido 2 pontos
    if ( points < mine)
    {
    printf("você perdeu menos pontos que eu.\n");
    }
    else if (points > mine)
    {
        printf("você perdeu mais pontos que eu.\n");
    }
    else
    {
        printf(" perdemos o mesmo tanto.\n");
    }
    return (0);
}

//if, else, else if constantes
