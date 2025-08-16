#include <stdio.h>
#include <stdlib.h>
char	*convert_to_hex(char c)
{
	char	base[16] = "0123456789abcdef";
	char	*out;

	out = malloc(sizeof(char) * 3);
	out[2] = 0;
	out[0] = '0';
	if (c > 16)
	{
		out[1] = base[c % 16];
		out[0] = base[c / 16];
	}
	else
		out[1] = base[(int) c];
	return (out);
}

int main()
{
	printf("suposto ser 2a: %s", convert_to_hex(127));
}
