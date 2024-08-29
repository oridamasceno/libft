#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*lst_nav;

	lst_size = 0;
	lst_nav = lst;
	while (lst_nav)
	{
		lst_size++;
		lst_nav = lst_nav->next;
	}
	return (lst_size);
}
