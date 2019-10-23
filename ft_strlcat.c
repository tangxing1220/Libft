/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:14:56 by xtang             #+#    #+#             */
/*   Updated: 2019/10/23 17:17:06 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*cur;
	char	*reader;
	size_t	len;

	cur = (char *)ft_memchr(dst, '\0', dstsize);
	if (cur == NULL)
		return (dstsize + ft_strlen(src));
	reader = (char *)src;
	len = (size_t)(cur - dst) + ft_strlen(reader);
	while ((size_t)(cur = dst) < dstsize - 1 && *reader != '\0')
	{
		*cur = *reader;
		cur++;
		reader++;
	}
	*cur = '\0';
	return (len);
}
