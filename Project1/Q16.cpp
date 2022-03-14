#include<stdio.h>
#include<algorithm>
int a[60], b[60];
int main() {
	int n, i;
	char str[100];
	scanf_s("%s", &str, sizeof(str));
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			a[str[i] - 64]++;
		else a[str[i] - 70]++;
	}
	scanf_s("%s", &str, sizeof(str));
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) //대문자 65~90
			b[str[i] - 64]++;
		else b[str[i] - 70]++; //소문자 97~122
	}
	for (i = 1; i <= 52; i++) {
		if (a[i] != b[i]) {
			printf("NO\n");
			exit(0); //프로그램 종료 >> 이게 위에 알고리즘
		}
	}
	printf("YES\n");
	return 0;
}