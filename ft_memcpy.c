/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:24 by ledamasc          #+#    #+#             */
/*   Updated: 2023/10/22 04:45:41 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	unsigned int	counter;

	if (src == NULL && dest == NULL)
		return (dest);
	mem_src = (unsigned char *)src;
	mem_dest = (unsigned char *)dest;
	counter = 0;
	while (n > counter)
	{
		mem_dest[counter] = mem_src[counter];
		counter++;
	}
	return (dest);
}
