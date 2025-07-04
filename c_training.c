#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main (int argv, char *argc[])
{
	char *message = "This is a test\n";
	write(1, message, strlen(message));
	return 0;
}

