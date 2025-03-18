
#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *res;
    
    /* allocating the memory for the new string */
    res = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    /* looping over the whole string s */
    while (i < ft_strlen(s))
    {
        /* applying the function f to each character of s
         * and storing the result in the new string res
         */
        res[i] = (*f)(i, s[i]);
        i++;
    }
    /* setting the NUL-terminating character */
    res[i] = 0;
    /* finally, we return res */
    return (res);
}