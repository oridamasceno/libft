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
