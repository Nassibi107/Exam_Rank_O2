#include <unistd.h>

void ft_pustr (char *str)
{
   int  i = 0;
   while (str[i])
      write(1,&str[i++],1);
}

int main (int ac ,char **av)
{
   if (ac == 3)
   {
      char *tmp = av[1];
      while (*av[2] && tmp )
      {
         while ((*av[2] == *tmp) && (*av[2] && *tmp))
         {
            tmp++;
            av[2]++;
         }
         av[2]++;
      }
      if (!(*tmp))
         ft_pustr(av[1]);

   }
   write(1,"\n",1);
}
