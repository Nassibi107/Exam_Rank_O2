

int check_base(char c, int base)
{
   char *s1 = "0123456789abcdef";
   char *s2 = "0123456789ABCDEF";

   while (--base)
   {
      if (c == s1[base] || c == s2[base])
         return (1);
   }
   return (0);
}

int get_value(char s)
{
   if (s >= '0' && s <= '9')
      return (s - '0');
   if (s >= 'a' && s <= 'f')
      return (s - (97 - 10));
   return (s - (65 - 10));
}

int   ft_atoi_base(char *s, int base)
{
   int r = 0;
   int sign = 1;
   while (*s = ' ' || (*s >= 9 && *s <= 13))
      s++;
   if (*s == '-' || *s == '+')
   {
      if (*s == '-')
         sign *= -1;
      s++;
   }
   while (*s && check_base(*s,base) == 1)
   {
      r = r * 16 + get_value(*s);
      s++;
   }
   return (r * sign);
}
#include <stdio.h>

int main()
{
   printf("%d\n", ft_atoi_base(" abc", 16));
}
