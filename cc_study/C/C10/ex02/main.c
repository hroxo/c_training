//this main is hardcoded for testing

#include <stdlib.h>
#include "header.h"
#include <fcntl.h>


int	main(int argc, char **argv)
{
	int 	fd;
	char	*text;
	
	//TODO chack for the flags
	if (!check_flag(argv[1], argv[2]))
	{
		print_error();
	}
	if (argc == 3)
	{
		text = tail_text(fd, 5);
		print_text(text, argv[1], 1);
	}
	fd = open(argv[1], O_RDONLY);
	text = tail_text(fd, 5);
	print_text(text, argv[1], 1);
	free(text);
	return (0);
}
