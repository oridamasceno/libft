#include "string.h"

void	*ft_memset(void *string, int value, size_t bytes)
{
	size_t	counter;
	char	*memory;

	counter = 0;
	memory = (char *)string;
	while (bytes > counter)
	{
		memory[counter] = value;
		counter++;
	}
	return (string);
}
