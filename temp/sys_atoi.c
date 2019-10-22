/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:24:18 by xtang             #+#    #+#             */
/*   Updated: 2019/10/22 14:48:04 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*add here your includes>*/
#include "libft.h"
/*<add here your includes*/

int main(void)
{
	/*add here your test>*/
	char*s = "9223372036854775808";
	printf("%d", atoi(s));
	/*<add here your test*/
	return (0);
}
