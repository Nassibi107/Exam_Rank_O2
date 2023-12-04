#include <stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2);

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return (0x0);
    while(*s1)
    {
        i = -1;
        while (s2[++i])
        {
          if(s2[i] == *s1)
            return ((char *) s1);
        }
        s1++;
    }
    return (0);
}

// int main ()
// {
//     const char *s = "yasssine";
//     const char *s1 = "yassnassibi";
//     printf(">> %s",ft_strpbrk(s,s1));
// }