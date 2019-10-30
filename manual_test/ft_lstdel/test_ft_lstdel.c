/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:17:29 by xtang             #+#    #+#             */
/*   Updated: 2019/10/30 19:34:20 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_free_done;

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
	nb_free_done++;
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
	nb_free_done = 0;
	ft_lstdel(&elem3, &ft_del);
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
	{
		ft_print_result(elem2);
		ft_print_result(elem4);
		write(1, "nb_free_done = ", 15);
		nb_free_done += '0';
		write(1, &nb_free_done, 1);
	}
	else
		write(1, "NULL", 4);
	return (0);
}
