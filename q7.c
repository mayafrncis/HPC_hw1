#include <stdio.h>
#include <stdlib.h>

int main()
{
	char **strarr = (char **) malloc(3 * sizeof(char *));
	if (strarr == NULL) {
		perror("malloc");
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		*(strarr + i) = (char *) malloc(3 * sizeof(char));
		if (*(strarr + i) == NULL) {
			perror("malloc");
			while (i > 0) free(*(strarr + (--i)));
			free(strarr);
			return 1;
		}
	}

	for (int i = 0; i < 3; i++) {
		*(*(strarr + i)) = 'H';
		*(*(strarr + i) + 1) = 'i';
		*(*(strarr + i) + 2) = '\0';
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n",*(strarr + i));
	}

	printf("Changing one of the strings:\n");

	*(*(strarr + 1) + 1) = 'X';

	for (int i = 0; i < 3; i++) {
		printf("%s\n",*(strarr + i));
	}

	for (int i = 0; i < 3; i++) {
		free(*(strarr + i));
        *(strarr + i) = NULL;
	}
	free(strarr);
	strarr = NULL;
}
