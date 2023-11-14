/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:18 by ledamasc          #+#    #+#             */
/*   Updated: 2023/10/22 19:35:56 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t b)
{
	unsigned char	*conv_s;

	conv_s = (unsigned char *) str;
	while (b--)
	{
		if (*conv_s == (unsigned char) c)
			return ((void *)conv_s);
		conv_s++;
	}
	return (NULL);
}
