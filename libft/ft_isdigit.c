#include "libft.h"

int    ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && <= 122))
        return (c);
    return (0);
}