#include <unistd.h>
#include <stdio.h>


void	print_bits(unsigned char octet)
{
   int i;
   char bit ;

   i = 8;
   while (i--)
   {

      bit = (octet >> i & 1) + '0';
      write(1,&bit,1);
   }
}

int main ()
{
   char octet = 'a';
   char bit ;
   bit = ((octet >> 7) & 1) + '0';
   printf("%c" , bit);
}
// 01100001
// 0
// 01100001

// 00000001

// 00000001
