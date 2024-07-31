#include <stdio.h>
#include "Aztec.h"

int main(int argc, char* argv[])
{
	Aztec aztec;

	FILE *file;
	char line[255];

	file = fopen("usr/local/share/aztec/data.txt", "r");
	if (file == NULL) return 1;

	while (fgets(line, 255, file)) {
		aztec.AddString("The first string");
	}
	fclose(file);

	aztec.ShowText();

	return 0;
}
