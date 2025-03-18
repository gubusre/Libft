#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *tmp_ptr;

    tmp_prt = (unsigned char *) b;
    while (len-- > 0)
        *(tmp_ptr++) = (unsigned char) c;
    return (b);
}