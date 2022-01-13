#include<iostream>
using namespace std;
int main() {
	int n, a, i, max = -2147000000, min = 2147000000;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a;
		if (max < a) max = a;
		if (min > a) min = a;
	}
	cout << max - min;
	return 0;
}
//10
//13 15 34 23 45 65 33 11 26 42