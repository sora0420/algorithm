#include<stdio.h>
int cnt[50001];
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf_s("%d", &n, sizeof(n));
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j = j + i) {
			cnt[j]++;
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}

//와우 배수로 ㄱㄱ
//      1 2 3 4 5 6 7 8
//cnt [ 1 1 1 1 1 1 1 1] 1 
//cnt [ 1 2 1 2 1 2 1 2] 2
//cnt [ 1 2 2 2 1 3 1 2] 3
//cnt [ 1 2 2 3 1 3 1 3] 4
//cnt [ 1 2 2 3 2 3 1 3] 5
//cnt [ 1 2 2 3 2 4 2 3] 6
//cnt [ 1 2 2 3 2 4 2 3] 7
//cnt [ 1 2 2 3 2 4 2 4] 8
