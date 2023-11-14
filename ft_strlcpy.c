/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:56 by ledamasc          #+#    #+#             */
/*   Updated: 2023/11/03 15:46:57 by ledamasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize)
	{
		while (src[x] && x < (dstsize - 1))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (ft_strlen((char *)src));
}
