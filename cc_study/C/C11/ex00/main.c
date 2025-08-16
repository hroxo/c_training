#include "header.h"

int	main(void)
{
	int tab[5] = {24, 42, 56, 43, 54};
	int length = 5;
	ft_foreach(tab, length, &ft_putnbr);
}
