#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = ft_strlen(s);
    str = (char *)malloc(sizeof(*str) * (j + 1));
    while (i < j)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}