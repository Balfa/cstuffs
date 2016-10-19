/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int sizeofintptr = sizeof(int*);
	int sizeofint =sizeof(int); 
	int poo = sizeof(int*) == sizeof(int);
	printf("poo: %d\n", poo);
	printf("sizeofintptr: %d\n", sizeofintptr);
	printf("sizeofint: %d\n", sizeofint);
	char bar[128];
	int i=0;
	for(i=0; i<100; i++)
	{
		//printf("bar[%d]: %c\n", i, bar[i]);
	}
	//int a = 0;	
	int b = 5;
	int* c = &b;
	//printf("c[a]: %d\n", c[a]);
	printf("c[b]: %d\n", c[b]);

	printf("-1 * b[c]: %d\n", (-1 * b[c]));
	printf("*c+b: %d\n", (*c+b));
//	printf("c[b][0]: %d\n", (c[b][0]));
	printf("*(c+b): %d\n", *(c+b));
	
	return 0;
}
*/

#include <stdio.h>
#include <string.h>
int main(void) {

char blah[] = "fizzbuzz";
  printf("%s\n", blah+4);

  char  bar[128];
  char  *baz = &bar[0];
  
  baz[127] = 0;

	printf("meh: %d\n", (int)(strlen(baz)));
//  return strlen(baz);
  return 0;
}
