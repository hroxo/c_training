#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "header.h"
#include "struct.h"

int main(int argc, char **argv)
{
	(void) argc;
	int j = 0;
	int fd = open(argv[1], O_RDONLY);
	int i = 0;
	t_map *out = file_to_string(fd, &i);
	printf("====>    <====\n");
	printf("%s", out[i].hex_value);
	while (j < i)
	{
		if (j % 16 == 0)
			write(1, "\n", 1);
		ft_putstr(out[j].hex_value); //TODO putstr
		j++;
	}
	free(out);
	return (0);
}
