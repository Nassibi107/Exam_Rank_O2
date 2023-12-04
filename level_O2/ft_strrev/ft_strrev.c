
#include <stdio.h>


char    *ft_strrev(char *str) 
{
    char tmp;
    int i = -1;
    int len = 0;
    while (str[len])
        len++;
    while(++i <  (len / 2)) 
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
    return (str);
}
