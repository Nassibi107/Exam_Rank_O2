

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
   int rst = 0 ;
   int i = 0;
   int s = 1;
   while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
      i++;
   if (str[i] == 45 || str[i] == 43)
   {
      if (str[i] == 45)
         s *= -1;
      i++;
   }
   while ((str[i] >= '0' && str[i] <=  '9') && (str[i]))
   {
      rst *= 10;
      rst += str[i] - '0';
      i++;
   }
   return (s * rst);
}
