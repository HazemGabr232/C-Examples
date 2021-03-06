
#include <stdio.h>

int htoi(char hex_string[]);

int main(void) {
	printf("%d\n", htoi("3ab666F9"));
	printf("%d\n", htoi("0x3AB666F9"));
	return 0;
}

int htoi(char s[]) {
	int i, n;
	i = n = 0;
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;

	for (; s[i] != '\0'; i++) {
		n *= 16;
		if (s[i] >= '0' && s[i] <= '9')
			n += s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'z')
			n += 10 + s[i] - 'a';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			n += 10 + s[i] - 'A';
	}

	return n;
}
