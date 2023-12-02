
#include <unistd.h>

void ft_putchar (char c)
{
   write(1,&c,1);
}
char ft_rot_13(char c)
{
   if  ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
      c += 13;
   else if  ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
      c -= 13;
   return (c);
}

int main (int ac , char **av)
{
   if (ac == 2)
   {
      while (*av[1])
         ft_putchar(ft_rot_13(*av[1]++));
   }
   write(1,"\n",1);
   return (0);
}
