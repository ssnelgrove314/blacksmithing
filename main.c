#include "blacksmithing.h"
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putendl("Usage: give me a valid board string");
		return (0);
	}
	game_init(argv[1]);
	return (0);
}