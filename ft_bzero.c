#include "libft.h"

void	ft_bzero(void *string, size_t length)
{
	char	*aux;

	aux = (char *) string;
	while (length > 0)
	{
		aux[length - 1] = '\0';
		length--;
	}
}
