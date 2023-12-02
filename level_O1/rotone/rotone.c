#include <unistd.h>

void ft_putchar(char c)
{
   write(1,&c,1);
}
char ft_rotone(char c)
{
   if  (c == 90 )
        return (c = 65,c);
   else if  (c == 122)
        return (c = 97,c);
   else if  ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (c + 1);
   return (c) ;
}

int main (int ac, char **av)
{
   if (ac == 2)
   {
      while (*av[1])
         ft_putchar(ft_rotone(*av[1]++));
   }
   return 0;
}
