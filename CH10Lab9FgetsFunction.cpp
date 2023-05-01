#include <stdio.h>
int main () 
{
	FILE *fp = fopen("file.txt" , "r");
	char str[60];
	fgets(str, 60, fp);
	puts(str);
	fclose(fp);
	return 0;
}
