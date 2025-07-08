#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *strrev (char *str)
{
	int len = strlen(str) - 1;
	int i = 0;
	char *rev;

	while(len > -1)
	{
		rev[i] = str[len];
		i++;
		len--;
	}
	rev[i] = '\0';
	i++;
	rev[i] = '\n';
	return rev;		
}

int main (int argc, char *argv[])
{
	if (argc < 2)
	{
		char *error = "Error!\nPlease please input the programm like: ./rev [word]\n";
		write(1, error, strlen(error));
		return 1;
	}
	for(int i = 1; i < argc; i++)
	{
		char *name = strrev(argv[i]);
		write(1, name, strlen(name));
		printf(" ");
	}
	printf("\n");
	return 0;
}

