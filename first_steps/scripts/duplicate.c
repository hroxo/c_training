#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char *dupl (char *w)
{
	int i = 0;
	int j = 0;
	int range = strlen(w);
	char *output = malloc(strlen(w));

	while (i < range)
	{
		if(j == 0 || output[j - 1] != w[i])
		{
			output[j] = w[i];			
			j++;
		}
		i++;
	}
	
	output[j] = '\0'; 
	return output;
}

int main (int argc, char *argv[])
{
	if (argc < 2)
	{
		char *ERROR = "Input Error!\nPlease input the script like ./duplicate [word]\n";
		write(1, ERROR, strlen(ERROR));
		return 1;
	}
	
	for(int i = 1; i < argc; i++)
	{
		printf("original word: %s\nnew word: %s\n",argv[i],dupl(argv[i]));
		free(dupl(argv[i]));
	}
	return 0;
} 
