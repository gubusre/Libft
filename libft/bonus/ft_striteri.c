#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    i = 0;
    /* looping over the whole original string */
    while (s[i])
    {
        /* apply the function f to the character at index i
         * passing i and the address to s[i] as parameter to f
         * f will update the original string directly
         */
        (*f)(i, &s[i]);
        i++;
    }
}