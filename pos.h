#ifndef POS_H
# define POS_H


# define UP(i) (x, y + i)
# define DOWN (x, y - 1)
# define LEFT (x - 1, y)
# define RIGHT (x + 1, y)
# define UP_LEFT (x - 1, y + 1)
# define UP_RIGHT (x + 1, y + 1)
# define DOWN_LEFT (x - 1, y - 1)
# define DOWN_RIGHT (x + 1, y - 1)


typedef struct 		s_pos
{
	char			x;
	char			y;
}					t_pos;

t_pos				*ft_pos_create(char x, char y);
t_pos				*ft_pos_update(t_pos *pos, char x, char y);



#endif