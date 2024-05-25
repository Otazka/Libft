#include "libft.h"

int ft_isdigit(int a)
{
    while(a > 47 && a < 58)
        return(1);
    return(0);
}