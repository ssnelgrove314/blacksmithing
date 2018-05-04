#ifndef BLACKSMITHING_H
# define BLACKSMITHING_H

# define BOARD_WIDTH 8
# define NUMBER_PIECES 64
# define BOARD_AREA 64
# define NUMBER_LAYERS 3
# define FIRST_LAYER 3

enum pieces
{
	one = '1',
	two = '2',
	three = '3',
	four = '4',
	rook = 'R',
	bishop = 'B',
	knight = 'K',
	queen = 'Q'
};

const char *piece_names[] = 
{
	"One", 
	"Two", 
	"Three", 
	"Four", 
	"Rook", 
	"Bishop", 
	"Knight", 
	"Queen"
};

typedef struct		s_board
{
	char			lowest_layer;
	t_piece			*selected_piece;
	t_list			*pieces;
}					t_board;

typedef struct		s_piece
{
	char			layer;
	char 			type;
	t_pos			location;
	t_list			*moves;
}					t_piece;

void				game_init(char *boardstr);

t_piece				**board_str_to_pieces(char *boardstr);
t_list				*get_piece_moves(t_piece *piece, t_piece **board);
t_list				*get_longest_path(t_board *board);

#endif