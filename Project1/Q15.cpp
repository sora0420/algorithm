#include<stdio.h>
int main() {
	int n, i, j, flag, cnt = 0;
	scanf_s("%d", &n, sizeof(n));
	for (i = 2; i <= n; i++) {
		flag = 1;
		for (j = 2; j*j <= i; j++) {
			if (i%j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}

//방법 1.
//'Ctrl + K + C '
//(주석 해제 = 'Ctrl + K + U')
//방법 2.
//'Ctrl + Shift + / '
//(주석 해제 = 동일('Ctrl + Shift + /'))

//for (j = 2; j*j <= 36; j++) {
//	printf("%d\n", j);
//}
//를 하면 이 for문은 j가 36의 제곱근인 6까지 참이고 j가 7이 되면 거짓이 됩니다.
//j = 2일 때  2 * 2 <= 36  : 참
//j = 3일 때  3 * 3 <= 36 : 참
//j = 4일 때  4 * 4 <= 36 : 참
//j = 5일 때  5 * 5 <= 36 : 참
//j = 6일 때  6 * 6 <= 36 : 참
//j = 7일 때  7 * 7 <= 36 : 거짓 되어 for문이 종료됩니다.
//수학에서 "x*x=a이면 x는 a의 제곱근"으로 정의됩니다. 
//(x의 제곱이 a 이면 x는 a의 제곱근이다.)
//28과 같은 제곱수가 아닌 숫자는 28의 제곱근이 5.xxxxx이니까 
//자연수 5까지만 j가 돌면서 확인하면 됩니다.

//다른 방법도 있는데  #include<math.h>를 하고
//for (j = 2; j <= sqrt(i); j++) {
//	printf("%d\n", j);
//}
//해도 됩니다.sqrt(i)는 i값의 제곱근을 구해주는 함수입니다.