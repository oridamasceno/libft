/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:37:25 by ledamasc          #+#    #+#             */
/*   Updated: 2023/10/20 16:10:20 by ledamasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *string, size_t length)
{
	char	*aux;

	aux = (char *) string;
	while (length > 0)
	{
		aux[length - 1] = '\0';
		length--;
	}
}
