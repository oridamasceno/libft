#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	counter;

	counter = 0;
	while (string[counter])
		counter++;
	return (counter);
}
