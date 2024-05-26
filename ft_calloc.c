#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t a;
    void *p;

    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    a = count * size;
    p = malloc(a);

    if (p == NULL)
        return (NULL);
    else
        ft_bzero(p, a);
    return (p);
}