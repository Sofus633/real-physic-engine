#include "ft_list.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tmp;
    }
}
