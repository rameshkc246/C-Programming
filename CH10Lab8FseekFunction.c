#include <stdio.h>
int main () 
{
	FILE *fp;
	fp = fopen("file.txt","w+");
	fputs("This is Java Programming Language", fp);
	fseek( fp, 7, SEEK_SET);
	fputs(" C Programming Language", fp);
	fclose(fp);
	return(0);
}
