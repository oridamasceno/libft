#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
			ft_lstclear(&new_element, (*del));
		else
			ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}
