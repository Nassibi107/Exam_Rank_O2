#include <unistd.h>


void ft_putnuber(int n)
{
   if (n > 9)
      ft_putnuber (n / 10);
   write(1  ,&"0123456789"[n % 10],1 );
}

int main (void)
{
   int i = 0;
   while (++i <= 100)
   {
      if  ( !(i % 5) && !(i % 3))
         write(1,"fizzbuzz",8);
      else if (!(i % 3))
         write(1,"fizz",4);
      else if (!(i % 5))
         write(1,"buzz",4);
      else
         ft_putnuber(i);
      write(1, "\n", 1);
   }
}
