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

//�Է°� 256
//res = �Է¹��������� ������� �� ���Ѱ�
//cnt = �ڸ���
//sum = �ڸ��� ���� ���Ѱ�
//sum  d   c  res
// 0 + 9 * 1   9
// 9 + 90* 2  189
//99+900 * 3 >>���⼭ �ɸ�
//256-99 = 157 * 3 >> 471
// 189 + 471