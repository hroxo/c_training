#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main (void)
{
	int x[2] = {3, 4};
	ft_swap(&x[0], &x[1]);
	printf("%i %i",x[0], x[1]);
}
