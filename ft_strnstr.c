/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:39:03 by ledamasc          #+#    #+#             */
/*   Updated: 2023/11/05 15:31:21 by ledamasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (len == 0)
		return ((char *)big);
	if (!little_len)
		return ((char *)big);
	while (*big && little_len <= len--)
	{
		if (!ft_memcmp(big, little, little_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
