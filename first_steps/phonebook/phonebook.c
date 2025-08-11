#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct 
{
	char name[100];
	int number;
}
contact;

int main (void)
{
	contact people[5];

	FILE *file = fopen("phonebook.csv", "a");

	printf("What is the name of your contact: ");
	scanf("%99s", people[0].name);

	printf("What is the number of your contact: ");
	scanf("%i", &people[0].number);
	
	fprintf(file, "%s,%i\n", people[0].name, people[0].number);
	
	fclose(file);
}
