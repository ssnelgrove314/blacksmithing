#include "blacksmithing.h"

t_piece	*piece_create(char type, char x, char y)
{
	t_piece *piece;
	char *types;

	types = "1234RBKQ";
	if (!ft_strchr(types, (int)type))
		return (NULL);
	piece = (t_piece *)ft_memalloc(sizeof(t_piece));
	if (piece)
	{
		piece->layer = FIRST_LAYER;
		piece->type = type;
		piece->location = ft_pos_create(x, y);
		piece->moves = NULL;
	}
	return (piece);
}

t_list	*get_piece_moves(t_piece *piece, t_board *board)
{
	t_list	**moves;
	t_piece *tmp;
	char	x;
	char	y;
	
	if (!piece || !board)
		return (NULL);
	x = piece->location->x;
	y = piece->location->y;
	tmp = NULL;
	switch (piece->type)
	{
		case '1':
		tmp = get_piece_at_pos(UP);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(DOWN);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(LEFT);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(RIGHT);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(UP_LEFT);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(UP_RIGHT);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(DOWN_LEFT);
		ft_lstappend(moves, tmp, 1);
		tmp = get_piece_at_pos(DOWN_RIGHT);
		ft_lstappend(moves, tmp, 1);
		case '2':

		case '3':

		case '4':

		case 'R':

		case 'B':

		case 'K':

		case 'Q':

		default:
	}
}