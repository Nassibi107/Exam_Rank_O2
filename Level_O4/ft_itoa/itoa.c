
#include <stdio.h>
#include <stdlib.h>




static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*zero(char *str)
{
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	str = NULL;
	n = nb;
	i = len(n);
	if (nb == 0)
		return (zero(str));
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

int main (int ac ,char **av)
{
   (void) ac;
   printf("%s",ft_itoa(atoi(av[1])));
}
