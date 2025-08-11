#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen (char *str)
{
	int len = 0;
	while(str[len])
	{
		len++;
	}
	return len;
}

char *ft_strcpy (char *str, char *dest)
{
	int i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
