#include <stdio.h>

int main() {
	FILE *file;
	file = fopen("/tmp/ramdisk/file.txt","w");
	for (int i = 0; i < 1000000; i++) {
		fprintf(file, ":(\n");
	}
	fclose(file);
}
