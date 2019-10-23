/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:37:11 by xtang             #+#    #+#             */
/*   Updated: 2019/10/23 17:38:31 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cur;

	cur = (unsigned char *)s;
	while (n--)
	{
		if (*cur == c)
			return (cur);
		if (n)
			cur++;
	}
	return (NULL);
}
