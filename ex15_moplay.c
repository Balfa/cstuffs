#include <stdio.h>

int main(int argc, char **argv)
{
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};
	char **i = names;
	printf("%x\n", i);
	printf("%c\n", **i);
	int k;
	for(k=0;k<22;k++)
	{
		printf("%x: %c\n", (*i+k), *(*i+k));
	}
	printf("\n");
	return 0;
}
