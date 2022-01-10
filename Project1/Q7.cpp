#include<stdio.h>
int main() {
	char a[101], b[101];
	int i, p = 0;
	gets_s(a, sizeof(a));
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 65 && a[i] <= 90) {
				b[p++] = a[i] + 32;
			}
			else b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s\n", b);
	return 0;
}
//대문자 65~90
//소문자 97~122
