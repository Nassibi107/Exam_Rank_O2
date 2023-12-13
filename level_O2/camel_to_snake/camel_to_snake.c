

#include <unistd.h>

// camel_to_snake
// int main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int i = 0;
// 		while (av[1][i])
// 		{
// 			if (av[1][i] >=  65 && av[1][i] <= 90)
// 			{
// 				av[1][i] += 32;
// 				write(1,"_",1);
// 			}
// 			write(1,&av[1][i],1);
// 			i++;
// 		}
// 	}
// 	write(1,"\n",1);
// }

// snake_to_camel
int main (int ac,char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '_')
			{
				if (!(av[1][++i]))
				{
					break;
				}
				av[1][i] -= 32;
			}

			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}
