#include <stdio.h>

int main(int argc, char *argv[])
{
	//int pants = 4321;
	//char *poo = *pants;
	//printf("pants poo: %s\n", poo);

	int numbers[4] = {'a','b'};
	char name[4] = {'a'};

	// first, print them out raw
	printf("numbers: %c %c %c %c\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	printf("name: %s\n", name);

	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = '6';
	numbers[3] = 'p';

	// setup the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	// then print them out initialized
	printf("numbers: %d %d %d %d\n",
		numbers, (numbers + 1),
		(numbers + 2), (numbers + 3));

	printf("name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	// print the name like a string
	printf("name: %s\n", name);

	// another way to use name;
	char *another = "Zed";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",
		another[0], another[1],
		another[2], another[3]);

	return 0;
}
