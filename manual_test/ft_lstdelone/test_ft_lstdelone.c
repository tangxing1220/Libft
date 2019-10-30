/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:26:56 by xtang             #+#    #+#             */
/*   Updated: 2019/10/30 17:45:14 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_result(t_list *elem)
{
	int	len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
}

void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

int		main(void)
{
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	char	str[] = "lorem";
	char	str2[] = "ipsum";
	char	str3[] = "dolor";
	char	str4[] = "sit";

	elem = ft_lstnew(str, sizeof(str));
	elem2 = ft_lstnew(str2, sizeof(str2));
	elem3 = ft_lstnew(str3, sizeof(str3));
	elem4 = ft_lstnew(str4, sizeof(str4));
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	
	ft_lstdelone(&elem3, &ft_del);
	if ( elem3 == NULL)
		if( elem2->next != NULL && elem4 != NULL)
			elem2->next = elem4;
	if (elem)
		ft_print_result(elem);
	else
		write(1, "NULL", 4);
	write(1, "\n", 1);
	if (elem2)
		ft_print_result(elem2);
	else
		write(1, "NULL", 4);
	write(1, "\n", 1);
	if (elem3)
		ft_print_result(elem3);
	else
		write(1, "NULL", 4);
	write(1, "\n", 1);
	if (elem4)
		ft_print_result(elem4);
	else
		write(1, "NULL", 4);
	return (0);
}
