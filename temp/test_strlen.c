/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:48:35 by xtang             #+#    #+#             */
/*   Updated: 2019/10/21 11:34:15 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"

int	main(void)
{
	char	i[] = "hello";
	char	*a;
	char    *b;
	int		x;

	a = i;
	x = ft_strlen(a);
	printf("ft_strlen %i\n",x);   
	b = i ;
	x = strlen(b); 
	printf("strlen %i\n", x);
}
