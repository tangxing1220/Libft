/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:12:06 by xtang             #+#    #+#             */
/*   Updated: 2019/10/28 13:17:03 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *link;

	new = NULL;
	link = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
		{
			link->next = f(lst);
		}
	}
	return (new);
}
