/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:15:16 by xtang             #+#    #+#             */
/*   Updated: 2019/10/24 20:19:44 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*cur;
	int		len1;
	int		len2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	cur = (char *)malloc(len1 + len2 + 1);
	if (cur == NULL)
		return (NULL);
	ft_strncpy(cur, str1, len1);
	cur = cur + len1;
	ft_strncpy(cur, str2, len2);
	return (cur - len2 - len1);
}
