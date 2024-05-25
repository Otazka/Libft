#include "libft.h"

int ft_isalnum(int a)
{
    while((a > 47 && a < 58) || (a > 64 && a < 91) || (a > 96 && a < 123))
        return(1);
    return(0);
}