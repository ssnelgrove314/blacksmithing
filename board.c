#include "blacksmithing.h"

t_board	*board_create(char *boardstr)
{
	t_board	*board;

	board = (t_board *)ft_memalloc(sizeof(t_board));
	if (board)
	{
		board->lowest_layer = FIRST_LAYER;
		board->selected_piece = NULL;
		board->board = board_str_to_pieces(boardstr);
	}
	return (board);
}

t_list **board_str_to_pieces(char *boardstr)
{
	char x;
	char y;
	char type;
	t_list **piece_list;
	t_piece *tmp;

	x = 0;
	y = 0;
	piece_list = NULL;
	tmp = NULL;
	if (!ft_check_board(boardstr))
		return (piece_list);
	while (y < BOARD_WIDTH)
	{
		while (x < BOARD_WIDTH)
		{
			type = boardstr[x + y];
			tmp = piece_create(type, x, y);
			ft_lstappend(piece_list, (void *)tmp, (size_t)(x + (y * BOARD_WIDTH)));
			y++;
		}
		x = 0;
		y++;
	}
	return (piece_list);
}

int	ft_check_board(char *boardstr)
{
	char *types;
	char *tmp;
	int index;

	index = 0;
	types = "1234RBKQ";
	tmp = types;
	while (boardstr[index] != '\0')
	{
		if (!(ft_strchr(types, (int)*boardstr)))
			return (0);
		index++;
	}
	if (index != BOARD_AREA)
		return (0);
	return (1);
}

t_piece	*get_piece_at_pos(t_board *board, t_pos *pos)
{
	t_piece *piece;
	char index;

	piece = NULL;
	index = 0;
	if (!board || !pos)
		return (NULL);
	if (pos)
	{
		index = pos->x + (pos->y * BOARD_WIDTH); //Check math later
		piece = ft_lstat(board->board, index);
	}
	return (piece);
}