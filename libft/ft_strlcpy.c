#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
    size_t  src_len;

    src_len = ft_strlen(src);
    if (src_len + 1 < dst_len)
        ft_memcpy(dst, src, src_len + 1)
    else if (dst_size != 0)
    {
        ft_memcpy(dst, src, dst_size - 1)
        dst[dst_size - 1] = 0;
    }
    return (src_len);
}
/*if forgot, dst has tu be null terminated so if the size of the source is bigger than destination,
must save one byte for the null*/