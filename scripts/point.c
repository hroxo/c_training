#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	int n = 50;
	int *p = &n;
	printf("n is at %p location\n", p);
	return 0;
}
