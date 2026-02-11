// #include <stdio.h>

// int main (void)
// {
// int i = 1;
// while (i <= 3)
// {
//     printf("meow\n");
//     i++;
// }

// }
// se o i for menor que 3 printe meow e incremente ++


// tambem pode ser feito assim:

#include <stdio.h>

void meow(int n);

int main (void)
 {
        meow(3);
 }

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }

}
