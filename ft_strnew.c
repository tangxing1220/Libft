/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:30:02 by xtang             #+#    #+#             */
/*   Updated: 2019/10/25 12:32:03 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(size_t) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
