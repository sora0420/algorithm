#include<stdio.h>
int digit_sum(int x) {
	int sum = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		sum = sum + tmp;
		x = x / 10;
	}
	return sum;
}

int main() {
	int n, num, i, sum, max = -2147000000, res;
	scanf_s("%d", &n, sizeof(n));
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &num, sizeof(num));
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) res = num;
		}
	}
	printf("%d\n", res);
	return 0;
}