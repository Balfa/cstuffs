#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;


	// Let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	states[1] = argv[1];


	// go through each string in argv
	// why am I skilling argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	for(i = 0; i < num_states; i++) {
		printf("states %d: %s\n", i, states[i]);
	}

	return 0;
}
