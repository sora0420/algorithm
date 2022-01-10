#include<iostream>
using namespace std;
int main() {
	int a, b, sum = 0, i;
	cin >> a >> b;
	for (i = a; i < b; i++) {
		sum += i;
		cout << i << " + ";
	}
	cout << i << " = " << sum + i;
	return 0;
}