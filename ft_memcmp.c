#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)str1;
	s = (unsigned char *)str2;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}
