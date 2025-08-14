#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

#define BUF_SIZE 1024

char	 *tail_text(int fd, int bit_cap)
{
	int		f_r;
	char	buf[BUF_SIZE];
	char	*file_text;
	char	*tot;
	int		size;
	int		i;

	i = 0;
	size = 0;
	f_r = read(fd, buf, BUF_SIZE);
	file_text = malloc (sizeof(char) * BUF_SIZE);
	if (!file_text)
		return (NULL);
	file_text = ft_strcat(file_text, buf);
	size += f_r;
	while (f_r > 0)
	{
		f_r = read(fd, buf, BUF_SIZE);
		file_text = malloc (sizeof(char) * BUF_SIZE);
		if (!file_text)
			return (NULL);
		file_text = ft_strcat(file_text, buf);
		size += f_r;
	}
	if (size < bit_cap)
	{	
		bit_cap = 0;
		tot = malloc(sizeof(char) * size);
		size = 0;
	}
	else
	{
		size -= bit_cap;
		tot = malloc(sizeof(char) * bit_cap);
	}
	if (!tot)
		return (NULL);
	while (file_text[size])
	{
		tot[i] = file_text[size];
		size++;
		i++;
	}
	free(file_text);
	return (tot);
}

