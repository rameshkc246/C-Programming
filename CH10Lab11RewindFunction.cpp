#include<stdio.h>  
int main()
{  
	FILE *fp;  
	char c;  
	fp=fopen("file.txt","r");  
	while((c=fgetc(fp))!=EOF)
	{  
		printf("%c",c);  
	}  
	rewind(fp);	//moves the file pointer at beginning of the file  
	while((c=fgetc(fp))!=EOF)
	{  
		printf("%c",c);  
	}  
	fclose(fp);    
	return 0;   
}    
