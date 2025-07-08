#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage requires more than the normal input ex: ./a.out [name]\n");
		return 1;
	}
	
	printf("You're name is: %s\n", argv[1]);
	return 0;
}
