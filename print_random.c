#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
	int rand1 = rand();

	unsigned int random_number = rand1 % 26;

	char character = 65+random_number;

	return character;
}

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar(randchar());
	putchar('\n');

	return(0);
}
