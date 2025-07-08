#include <unistd.h>
#include <stdio.h>

int main()
{
	char *hello = "I'm learning fucking C!\n";
	write(1, hello, 20);
	return 0;
}

