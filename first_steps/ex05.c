#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	char 	comma;
	char	space;
	char	letra[3];

	a = 0;
	comma = ',';
	space = 32; //ASCII de 32 é o space
	
	while (a < 8)
	{
		b = a + 1;

		while(b < 9)
		{
			c = b + 1;
			while(c < 10)
			{
				letra[0] = a + '0';
				letra[1] = b + '0';
				letra[2] = c + '0';
				write(1, letra, 3);
				if(a != 7 && b != 8 && b != 9)
				{
					write(1, &comma, 1);
					write(1, &space, 1);
				}	
				c++;
			}
			b++;
		}
		a++;
	}
}

int main (void)
{
	ft_print_comb();
	return 0;
}
