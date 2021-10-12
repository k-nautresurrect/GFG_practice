#include<iostream>

using namespace std;

int fac(int n) {
	if (n == 0)
		return 1;
	return n * fac(n - 1);
}

int main() {
	int n; cin >> n;
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	cout << res << endl;
	cout << fac(n) << endl;
	return 0;
}
