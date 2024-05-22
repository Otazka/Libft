#include 'libft.h'

int ft_strlen(const* str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}