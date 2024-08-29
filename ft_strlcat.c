#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	hold;
	size_t	str_len;

	str_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len])
		dst_len++;
	hold = dst_len;
	while (src[dst_len - hold] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = src[dst_len - hold];
		dst_len++;
	}
	if (hold < dstsize)
		dst[dst_len] = '\0';
	return (hold + str_len);
}
