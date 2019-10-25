/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:24:03 by xtang             #+#    #+#             */
/*   Updated: 2019/10/25 16:36:47 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			str[j] = s[i];
			i++;
			j++;
		}
		else
			i++;
	}
	str[j + 1] = '\0';
	return (str);
}
