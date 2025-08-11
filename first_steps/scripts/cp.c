#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[])
{
	if(argc == 3)
	{
		FILE *src = fopen(argv[1], "rb"); //reads bytes
		FILE *dst = fopen(argv[2], "wb"); //writes bytes
		
		uint8_t b; //declares b is a byte
		
		while(fread(&b, sizeof(b), 1, src) != 0)
		{
			fwrite(&b, sizeof(b), 1, dst);
		}
		fclose(dst);
		fclose(src);
	}
	else
	{
		char *Error = "Usage Error!\n ./cp [copy adress] [paste adress]\n";
		write(1, Error, strlen(Error));
	}
}
