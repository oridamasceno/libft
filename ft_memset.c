/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:28 by ledamasc          #+#    #+#             */
/*   Updated: 2023/10/22 13:41:41 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "string.h"

void	*ft_memset(void *string, int value, size_t bytes)
{
	size_t	counter;
	char	*memory;

	counter = 0;
	memory = (char *)string;
	while (bytes > counter)
	{
		memory[counter] = value;
		counter++;
	}
	return (string);
}
