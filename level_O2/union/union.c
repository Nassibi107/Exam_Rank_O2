#include <unistd.h>



int main (int ac, char **av)
{
   if (ac == 3)
   {
      int tab[256];
      int j = 1;
      int  i = 0;
      while (j < 3)
      {
         while (av[j][i])
            tab[(int) av[j][i++]] =  1;
         i = 0;
         j++;
      }
      j = 1;
      while ( j  < 3)
      {
            while(av[j][i])
            {
               if (tab[(int) av[j][i]] == 1)
               {
                  write(1,&av[j][i],1);
                  tab[(int) av[j][i]] = 0;
               }
               i++;
            }
            i = 0 ;
            j++;
      }

   }
   write(1,"\n",1);
}
