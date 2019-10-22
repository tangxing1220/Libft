/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:31:14 by xtang             #+#    #+#             */
/*   Updated: 2019/10/18 14:48:53 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ftmemset(void *b, int c, size_t len)
{
	unsigned char *cur;

	if (len == 0)
		return (b);
	cur = (unsigned char *)b;
	while (len--)
	{
		*cur =  (unsigned char)c;
		if(len)
			cur++;
	}
	return (b);
}
