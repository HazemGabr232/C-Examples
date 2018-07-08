#include <stdio.h>

#define MAX_CHARS 1000

int main(void) {
	int i, c;
	char s[MAX_CHARS];

	for (i = 0; i < MAX_CHARS - 1; ++i) {
		c = getchar();
		if (c == '\n') break;
		if (c == EOF) break;
		s[i] = c;
	}

	return 0;
}
