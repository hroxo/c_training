//this main is hardcoded for testing
#include <stdlib.h>
#include "header.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int 	fd;
	char	*text;
	int		i;

	i = 3;
	//TODO chack for the flags
	if (check_flag(argv[1], argv[2]))
	{
		ft_putstr("Erro!\n");
		return (1);
	}
	if (argc == 3)
	{
		text = tail_text(STDIN_FILENO, ft_atoi(argv[2]));
		print_text(text, argv[1], 0);
	}
	else if (argc == 4)
	{
		fd = open(argv[i], O_RDONLY);
		text = tail_text(fd, ft_atoi(argv[2]));
		print_text(text, argv[i], 0);
		free(text);
	}
	else if (argc > 4)
	{
		while (i < argc)
		{	
			fd = open(argv[i], O_RDONLY);
			text = tail_text(fd, ft_atoi(argv[2]));
			print_text(text, argv[i], 1);
			ft_putstr("\n");
			free(text);
			i++;
		}
	}
	return (0);
}
