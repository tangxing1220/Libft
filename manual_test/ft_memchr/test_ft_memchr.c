/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 09:36:27 by xtang             #+#    #+#             */
/*   Updated: 2019/10/29 12:07:55 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}

int		main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("ft_memchr output: %s\n", ft_memchr(tab, 0, 7));
	printf("memchr output: %s\n", memchr(tab, 0, 7));
	return (0);
}
