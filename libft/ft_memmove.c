#include "libft.h"

void    *ft_memmove(void *dst, const void *src size_t len)
{
    char    *c_str;
    char    *c_dst;
    size_t  i;
    if (!dst && !src)
        return (NULL);
    c_src = (char *) src;
    c_dst = (char *) dst;
    if (c_dst > csrc)
    {
        while (len-- > 0)
            c_dst[len] = c_src[len];
    }
    else
    {
        while (i++ < len)
            c_dst[i] = c_src[i];
    }
    return (dst);
}