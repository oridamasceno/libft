#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_position;
	t_list	*last_lst;

	if (!lst)
		return (NULL);
	lst_position = lst;
	while (lst_position)
	{
		last_lst = lst_position;
		lst_position = lst_position -> next;
	}
	return (last_lst);
}
