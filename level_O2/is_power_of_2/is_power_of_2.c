
int	    is_power_of_2(unsigned int n)
{
   if (!n)
      return (n);
   while (n % 2 == 0)
      n /= 2;
   return ((n == 1) ? n : !n);
}
