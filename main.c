#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		n;

	n = 0;
	while (++n < argc)
	{
		get_next_line(argv[n]);
	}
	return (0);
}
