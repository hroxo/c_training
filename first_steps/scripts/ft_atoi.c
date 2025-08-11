#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *word)
{
	int i = 0;
	int score = 0;
	int sign = 1;

	while(word[i] != '\0')
	{
		if (word[i] == '-')
		{
		    sign = -1;
		    i++;
		}
		else if (word[i] == '+')
		{
		    i++;
		}
		if(word[i] >= '0' && word[i] <= '9')
		{
			score = score * 10 + ((int)word[i] - '0');
		}
		i++;
	}
	score = score * sign;
	return score;
}

int main (int argc, char *argv[])
{
	if(argc < 2)
	{
		char *error = "Error!\nPlease input like ./ft_atoi [Word]\n";
		write(1, error, strlen(error));
		return 1;
	}
	else
	{
		int i = 1;
		int score = 0;

		while (i < argc)
		{
			score = ft_atoi(argv[i]);
			printf("%i score: %i\n", i, score);
			i++;
		}
	}
	return 0;	
}

