#include<stdio.h>
int main() {
	int n, sum = 0, cnt = 1, digit = 9, res = 0;
	scanf_s("%d", &n, sizeof(n));
	while (sum + digit < n) {
		sum = sum + digit;
		res = res + (cnt*digit);
		cnt++;
		digit = digit * 10;
	}
	res = res + ((n - sum)*cnt);
	printf("%d\n", res);
	return 0;
}

//입력값 256
//res = 입력받은값보다 작은경우 다 더한값
//cnt = 자릿수
//sum = 자릿수 개수 더한값
//sum  d   c  res
// 0 + 9 * 1   9
// 9 + 90* 2  189
//99+900 * 3 >>여기서 걸림
//256-99 = 157 * 3 >> 471
// 189 + 471