#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	char	n1[2];
	char	n2[2];
	char	space;
	char	comma;

	i = 0;
	space = 32; //ASCII para espaço
	comma = ',';
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			n1[0] = i / 10 + '0';
			n1[1] = i % 10 + '0'; // isto vai buscar o resto ou seja se i = 42 isto dá o 2; a cima o i / 10 dá o 4 para o mesmo exemplo (so é possivel por ser um int)
			n2[0] = j / 10 + '0';
			n2[1] = j % 10 + '0';
			
			write(1, n1, 2);
			write(1, &space, 1);
			write(1, n2, 2);
			write(1, &comma, 1);
			if (i != 98 || j != 99)
			{
				write(1, &space, 1);
				write(1, &comma, 1);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

