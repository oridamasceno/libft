#include "libft.h"

int	ft_isprint(int print)
{
	if (print >= 32 && print <= 126)
		return (1);
	else
		return (0);
}
