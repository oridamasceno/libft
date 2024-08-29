#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp_position;

	temp_position = *lst;
	*lst = new;
	new->next = temp_position;
}
