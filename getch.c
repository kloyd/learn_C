#include <stdio.h>

/* copy input to output */
   
main() 
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
		
	putchar(10);
	printf("EOF = %d\n", EOF);
	
	printf("getchar() != EOF = %d\n", getchar() != EOF);
}