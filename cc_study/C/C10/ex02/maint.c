
#include <stdlib.h>
#include "header.h"
#include <fcntl.h>


int	main(int argc, char **argv)
{
	int fd;
	char	*text;
	
	(void) argc;
	fd = open(argv[1], O_RDONLY);
	text = tail_text(fd, 1034);
	print_text(text, argv[1], 1);
	free(text);
	return (0);
}
