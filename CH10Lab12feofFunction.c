#include <stdio.h>
int main() 
{
	FILE *fp = fopen("file.txt", "r");
	int c;
	while ((c = fgetc(fp)) != EOF) 
	{
		putchar(c);
	}
	
	if (feof(fp)) 
	{
		printf("\nEnd of file reached.");
	} 
	else 
	{
		printf("Error reading file.");
	}
	
	fclose(fp);
	return 0;
}

