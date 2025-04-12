/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:33:05 by gubusque          #+#    #+#             */
/*   Updated: 2025/04/12 21:25:18 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (cc == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
 * DESCRIPTION
 *      The  strchr() function returns a pointer to the first
 *      occurrence of the character c in the string s.
 *      Here "character" means "byte"; these functions do not 
 *      work with wide or multibyte characters.
 *
 * RETURN VALUE
 *      The  strchr() and strrchr() functions return a pointer 
 *      to the matched character or NULL if the character is not found.
 *      The terminating null byte is considered part of  the  string,
 *      so that if c is specified as '\0', these functions return a 
 *      pointer to the terminator.
 *
 * My_com
 * 	check in a string even the NULL and return and 
 * 	if not there even no null return NULL.
 */
