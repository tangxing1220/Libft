/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:39:43 by xtang             #+#    #+#             */
/*   Updated: 2019/10/22 18:54:55 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <strings.h>
# include <ctype.h>

typedef	enum	e_bool
{
	false,
	true
}				t_bool;

char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_atoi(const char *str);
t_bool	ft_isspace(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
t_bool	ft_isalnum(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
