/* sample program illustrating the use of input/output library functions */
#include <stdio.h>
int main ( )
{
	char c; 						/* declarations */
	float x;
	int i;
	c = getchar(); 					/* character input */
	scanf ("%f", &x) ; 				/* floating-point input */
	scanf ("%d", &i); 				/* integer input */
	
	putchar(c); 					/* character output */
	printf("\t %08d %7.4f", i, x); 		/* numerical output */ 
}
