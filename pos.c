#include "blacksmithing.h"

t_pos	*ft_pos_create(char x, char y)
{
	t_pos *pos;

	pos = (t_pos *)ft_memalloc(sizeof(t_pos));
	if (pos)
	{
		pos->x = x;
		pos->y = y;
	}
	return (pos);
}

void	ft_pos_update(t_pos *pos, char x, char y)
{
	if (pos)
	{
		pos->x = x;
		pos->y = y;
	}
}