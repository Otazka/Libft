#include "libft.h"

int ft_isalpha(int a)
{
    while((a > 64 && a < 91) || (a > 96 && a < 123))
        return (1);
    return(0);
}