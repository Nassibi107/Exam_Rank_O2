

#include <stdlib.h>

char **hand_err (char *str)
{
   int i;
   i = 0;
   while (str[i])
      free(&str[i++]);
   free(str);
   return (NULL);
}

int number_of_word(char *str,char c)
{
   int i = 0;
   int wc = 0;
   while (str[i])
   {
      if (str[i] == c)
            i++;
      else
      {
         wc++;
         while (str[i] && str[i] != c)
            i++;
      }
   }
   return (wc);
}
char *hook (char *str,char c, int *id)
{
   int i = 0;
   char *word;
   int len = 0;

   while (str[*id] == c)
      (*id)++;
   i = (*id);
   while (str[i] && str[i] != c)
   {
      len++;
      i++;
   }
   word = malloc(len+ 1);
   if (!word)
      return (0);
   i = 0;
   while (str[*id] && str[*id] !=c)
   {
      word[i] = str[*id++];
      i++;
   }
   word[i] = '\0';
   return (word);
}

char **split (char *str, char c)
{
   char **s;
   int i = 0;
   int *id = 0;
   int wc;

   wc = number_of_word(str,c);
   s = malloc(( wc + 1) * sizeof((char *)) );
   while (i < wc)
   {
      s[i] = hook(str,c,&id);
      if (!(*s[i]))
         
   }
}
