#include "libft.h"

void    ft_memcpy(void *dst, const void *src, size_t len)
{
    unsigned char   *tmp_dst;
    unsigned char   *tmp_src;

    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
    while (len-- > 0)
        *(tmp_dst++) = *(tmp_src++);
    return (dst);
}