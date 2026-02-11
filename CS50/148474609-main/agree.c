#include <stdio.h>
#include <cs50.h>

int main (void)
{
  char c = get_char("Você concorda? ");

  if (c == 'y' || c == 'Y')
  {
    printf ("De acordo.\n");
   }
   else if (c == 'n' || c == 'N')
   {
    printf ("Não concordo.\n");
   }
   return (0);
}
 // se for caracteres (char) usar aspas simples, se for letras ou strings aspas duplas
