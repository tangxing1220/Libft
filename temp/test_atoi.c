/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:24:18 by xtang             #+#    #+#             */
/*   Updated: 2019/10/22 14:42:00 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*add here your includes>*/
#include "libft.h"
/*<add here your includes*/

int main(void)
{
	/*add here your test>*/
	char*s = "9223372036854775808";
	printf("%d", ft_atoi(s));
	/*<add here your test*/
	return (0);
}
