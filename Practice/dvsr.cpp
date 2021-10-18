#include<iostream>

using namespace std;

void dvsr(int n) {
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			cout << i << endl;
			cout << n / i << endl;
		}
	}
}

void odrdvsr(int n) {
	int i;
	for ( i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			cout << i << endl;
		}
	}
	for (; i >= 1; i--) {
		if (n % i == 0)
			cout << n / i << endl;
	}
}

int main() {
	int n;  cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			cout << i << endl;
	}
	dvsr(n);
	odrdvsr(n);
	return 0;
}