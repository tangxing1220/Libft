#include "libft.h"

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n", 1);
}

int main(void)
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;

	char		str[] = "lorem";
	char 		str2[] = "ipsum";
	char		str3[] = "dlolr";
	char		str4[] = "sit";

	elem = ft_lstnew(str, sizeof(str));
	elem2 = ft_lstnew(str2, sizeof(str2));
	elem3 = ft_lstnew(str3, sizeof(str3));
	elem4 = ft_lstnew(str4, sizeof(str4));
	begin = NULL;
	ft_lstadd(&begin, elem4);
	ft_lstadd(&begin, elem3);
	ft_lstadd(&begin, elem2);
	ft_lstadd(&begin, elem);

	while (begin)
	{
		ft_print_result(begin);
		begin = begin->next;
	}
	return (0);
}

