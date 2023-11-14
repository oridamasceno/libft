/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ori <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:44:11 by ori               #+#    #+#             */
/*   Updated: 2023/10/28 23:44:43 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_nav;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lst_nav = ft_lstlast(*lst);
	lst_nav->next = new;
}
