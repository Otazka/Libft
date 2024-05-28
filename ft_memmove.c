#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t a)
{
    size_t i;

    if ((dst == NULL) && (src == NULL))
        return (NULL);
    i = 0;
    if (dst > src)
    {
        while (n--)
            *((unsigned char *)dst + a) = *((unsigned char *)src + a);
    }
    else
    {
        while (n--)
        {
            *((unsigned char *)dst + i) = *((unsigned char *)src + i);
            i++;
        }
    }
    return (dst);
}