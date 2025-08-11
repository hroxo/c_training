#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;
	while(s1[i] == s2[i])
	{
		i++;
	}
	int result = (int) s1[i] - (int) s2[i];
	return result;
}

int main (void)
{
	char *s1 = "Andrezdsd";
	char *s2 = "Ansadasdasdsd";
	int n = ft_strcmp(s1, s2);
	int j = strcmp(s1, s2);
	if (n == 0)
	{
		printf ("Words are equal, strcmp = %i\n", j);
	}
	if (n < 0)
	{
		printf("Word 2 is bigger that word 1 ft_strcmp = %i; strcmp = %i\n", n, j);
	}
	else
	{
		printf("Word 1 is bigger that word 2 ft_strcmp = %i; strcmp = %i\n", n , j);
	}
}


