/* read in a character and display it in uppercase */
#include <stdio.h>
#include <ctype.h>
main( )
{
	char letter;
	letter = getchar();
	putchar(toupper(letter));
}
