#include <stdlib.h>

char    *ft_strdup(char *src);

char    *ft_strdup(char *src)
{
    char *str;
    int i = 0;
    while (src[i])
        i++;
    str = malloc(sizeof(char) *  (i + 1));
    if (!str)
        return (str);
    i = -1 ;
    while (src[++i]) 
    {
        str[i] = src[i];
    }    
    str[i] = 0;
    return (str);
}
