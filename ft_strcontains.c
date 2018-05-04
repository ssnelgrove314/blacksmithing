#include "libft.h"

int	ft_strcontains(char c, const char *str)
{
	while (*str++)
	{
		if (*str == c)
			return (1);
	}
	return (0);
}