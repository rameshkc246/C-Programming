#include <stdio.h>

int main() {
	FILE *fp = fopen("file.txt", "r");
	int c;
	
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	
	if (ferror(fp)) {
		printf("Error reading file.\n");
	}
	
	fclose(fp);
	return 0;
}

