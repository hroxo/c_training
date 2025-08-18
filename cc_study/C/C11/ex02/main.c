#include <stdio.h>

int	if_a(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int ft_any(char **tab, int(*f)(char*));

int	main(int argc, char **argv)
{
	(void) argc;
	printf("1 se tiver um 'a' %i\n", ft_any(&argv[1], &if_a));
	return (0);
}
