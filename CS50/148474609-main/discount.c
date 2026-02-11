#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main (void)
{
    float regular = get_float("Preço regular R$ ");
    int percent_off = get_int("Qual pocentagem do desconto?:");
    float sale = discount(regular, percent_off);
    printf(" Preço com desconto: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}
