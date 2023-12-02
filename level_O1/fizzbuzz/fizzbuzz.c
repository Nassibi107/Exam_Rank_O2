#include <unistd.h>

void ft_putchar (char c)
{
   write(1,&c,1);
}

void ft_putnbr(int n)
{
   char	str[10] = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &str[n % 10], 1);
}
int main (int ac,char **av)
{
   (void) ac;
   (void) av;
   int   i = 1;
   while (i <= 100)
   {
      if ( !(i % 3) && !(i % 5 ))
          write(1,"fizzbuzz",8);
      else if (!(i % 3 ))
          write(1,"fizz",4);
      else if (!(i % 5 ))
          write(1,"buzz",4);
      else
         ft_putnbr(i);
      i++;
      write (1, "\n", 1);
   }
}
