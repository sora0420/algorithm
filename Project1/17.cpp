#include<stdio.h>
int main() {
	int n, sum = 0, i, j, m, ans;
	scanf_s("%d", &n, sizeof(n));
	for (i = 1; i <= n; i++) {
		scanf_s("%d %d", &m, &ans, sizeof(m), sizeof(ans));
		sum = 0;
		for (j = 1; j <= m; j++) {
			sum += j;
		}
		if (ans == sum) printf("YES\n");
		else printf("NO\n");
	}
	return 0;

}
