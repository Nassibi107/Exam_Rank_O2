#include <inttypes.h>
#include <unistd.h>


int ft_index (int c)
{
   if (c >= 65 && c <= 90)
      return (c - 65 + 1);
   else if (c >= 97 && c <= 126)
      return (c - 97 + 1);
   return (1);
}


int main (int ac,char **av)
{
   if (ac == 2)
   {
      int i = 0;
      while (av[1][i])
      {
         int r = ft_index(av[1][i]);
         while(r--)
            write(1,&av[1][i],1);
         i++;
      }
   }
   write (1,"\n",1);
}
