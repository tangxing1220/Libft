#include "libft.h"

void ft_modify_list_with_d(t_list *elem)
{
    int len;
    len = 0;
    while(((char *)elem->content)[len])
    {
        ((char *)elem->content)[len] = 'd';
        len++;
    }
}

void ft_print_result(t_list *elem)
{
    int len;

    while(elem)
    {    
        len = 0;
        while(((char *)elem->content)[len])
            len++;
        write(1,elem->content, len);
        write(1, "\n", 1);
        elem = elem->next;
    }
}

int main(void)
{
    t_list  *elem;
    t_list  *elem2;
    t_list  *elem3;
    t_list  *elem4;

    char    str[] = "lorem";
    char    str2[] = "ipsum";
    char    str3[] = "dolor";
    char    str4[] = "sit";  

    elem = ft_lstnew(str, sizeof(str));
    elem2 = ft_lstnew(str2, sizeof(str2));
    elem3 = ft_lstnew(str3, sizeof(str3));
    elem4 = ft_lstnew(str4, sizeof(str4));

    elem->next = elem2;
    elem2->next = elem3;
    elem3->next = elem4;

    ft_lstiter(elem, &ft_modify_list_with_d);
    ft_print_result(elem);

    return (0);
}   