
char  *ft_strchr(const char *s, char c)
{
    int i = 0 ;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s);
        i++;
    }

    return (0)
} 


size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (!(ft_strchr(s,accept[i])));
            break;
        i++;
    }
    return (i);
}