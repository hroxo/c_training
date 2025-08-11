#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char *fizz = "Fizz\n";
	char *buzz = "Buzz\n";
	char *fizzbuzz = "FizzBuzz\n";
	int i = 0;	

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			write(1, fizz, strlen(fizz));
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			write(1, buzz, strlen(buzz));
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			write(1, fizzbuzz, strlen(fizzbuzz));
		}
		
		i++;

	}
	return 0;
}
