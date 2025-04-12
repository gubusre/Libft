/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:41:53 by gubusque          #+#    #+#             */
/*   Updated: 2025/04/12 21:00:21 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		lst_len;

	lst_len = 0;
	tmp = lst;
	while (tmp)
	{
		lst_len++;
		tmp = tmp->next;
	}
	return (lst_len);
}
