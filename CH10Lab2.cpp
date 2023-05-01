#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	FILE *fptr;
	
	if ((fptr = fopen("G://BSc CSIT/1st sem/C Programming/C Lab/CH10/lab10.txt","r")) == NULL)
	{
		printf("Error! opening file");
		exit(1);
	}
	
	fscanf(fptr,"%d", &num);
	
	printf("Value of n=%d", num);
	fclose(fptr); 
	
	return 0;
}
