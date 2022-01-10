#include<stdio.h>
int main() {
	char a[100];
	int res = 0, cnt = 0, i;
	scanf_s("%s", &a, sizeof(a));
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res%i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
//48 = 0 숫자 0
//48~57 사이가 숫자 0~9숫자임