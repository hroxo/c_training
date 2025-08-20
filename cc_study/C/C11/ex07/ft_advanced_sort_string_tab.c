#include <stdlib.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	char	*temp;
	int	i;
	int	j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = i + 1;
		while (tab[j] != NULL)
 		{
			if ((*cmp)(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
