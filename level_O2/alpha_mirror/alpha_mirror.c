#include <unistd.h>

void ft_putchar (char c)
{
   write(1,&c,1);
}
void ft_mirror (int c)
{
   if (c >= 'a' && c <= 'z')
      c = 'z' - (c - 'a');
   else if (c >= 'A' && c <= 'Z')
      c = 'Z' - (c - 'A');
   write(1,&c,1);
}

int main (int ac, char **av)
{
   if (ac == 2)
      while(*av[1])
        ft_mirror(*av[1]++);
   write(1,"\n",1);

}
