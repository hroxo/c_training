#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	char *name = "Hugo!";
	char *p = &name[0];
	printf("n is at %p location\n", name);
	return 0;
}
