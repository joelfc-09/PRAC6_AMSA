#include <stdio.h>

int main() {
	FILE *file;
	file = fopen("file.txt","w");
	for (int i = 0; i < 1000000; i++) {
		fprintf(file, ":D\n");
	}
	fclose(file);
}
