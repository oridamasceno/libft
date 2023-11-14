/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:13:06 by ledamasc          #+#    #+#             */
/*   Updated: 2023/11/03 15:46:17 by ledamasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_holder;
	t_list	*element;

	if (!*lst)
		return ;
	element = *lst;
	while (element)
	{
		lst_holder = element->next;
		ft_lstdelone(element, del);
		element = lst_holder;
	}
	*lst = NULL;
}
