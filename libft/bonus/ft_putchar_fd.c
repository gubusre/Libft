#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    /* first parameter is the file descriptor
     * second parameter is the address to the character
     */
    write(fd, &c, 1);
}