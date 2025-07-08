#include <stdio.h>
#include <unistd.h>

char *ft_charup (char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	s[i] = '\0';
	return s;
}

int main (void)
{
	char *name = "HUGO";
	ft_charup(name);
	printf("%s\n", name);
}
