#include "libft.h"

int	ft_isascii(int asc)
{
	if (asc >= 0 && asc <= 127)
		return (1);
	else
		return (0);
}
