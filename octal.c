#include <stdio.h>

int main()
{
	unsigned int num;
	
	printf("Input value in octal: ");
	scanf("%o", &num);
	
	printf("Entered value is in octal format  : %o\n", num);
	printf("Entered value is in decimal format: %d\n", num);

	
	return 0;
}

