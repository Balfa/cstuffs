#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;

	printf("I am %d years old.\n", age);
	printf("I am %d (100%%) inches tall.\n", height);

	printf("Alarm:\a");
	printf("Backspace:\b");
	printf("Formfeed:\f");
	printf("Newline:\n");
	printf("Carriage Return:\r");
	printf("Horizontal Tab:\t");
	printf("Vertical Tab:\v");
	printf("Backslash:\\");
	printf("Single quotation mark:\'");
	printf("Double quotation mark:\"");
	printf("Question mark:\?");
	printf("The character whose numerical value is given by nnn interpreted as an octal number:\111");
	printf("....hexidecimal number:\xb3");

	printf("\n\n\n");
	int d = 3.0;
	printf("%d", d);
	printf("\n\n\n");

	return 0;
}

