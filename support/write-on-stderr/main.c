#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		write(2, argv[1], strlen(argv[1]));
		write(2, "\n", 1);
	}
	else
	{
		write(2, "write on stderr\n", 16);
	}
	if (argc == 3)
		return (atoi(argv[2]));
	return (1);
}
