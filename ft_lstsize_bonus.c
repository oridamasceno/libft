/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ori <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:47:31 by ori               #+#    #+#             */
/*   Updated: 2023/10/28 23:47:37 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
