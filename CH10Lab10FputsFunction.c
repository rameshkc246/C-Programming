#include<stdio.h>
#include<string.h>
int main () 
{
	FILE *fp;
	fp = fopen("file.txt", "w+");
	char str[100];
	strcpy(str,"This is c programming.");
	fputs(str, fp);
	fclose(fp);
	return(0);
}
