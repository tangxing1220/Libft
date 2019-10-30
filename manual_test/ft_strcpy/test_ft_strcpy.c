/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:30:29 by xtang             #+#    #+#             */
/*   Updated: 2019/10/29 13:49:11 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dst[i] = '\0';
	}
	return (dst);
}

int		main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'f', 9);
	if (dest != ft_strcpy(dest, ""))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 15);
	return (0);
}
