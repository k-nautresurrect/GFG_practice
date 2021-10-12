#include <iostream>

using namespace std;

int trailingzero(int n) {
	int res = 0;
	for (int i = 5; i <= n; i *= 5) {
		res += n / i;
	}
	return res;
}

int main() {
	int fac = 1, cnt = 0, n; cin >> n;
	for (int i = 1; i <= n; i++) {
		fac *= i;
	}
	while (fac != 0) {
		if (fac % 10 == 0) { cnt++; fac /= 10; }
		else { break; }
	} cout << cnt << endl;
	cout << trailingzero(n) << endl;
	return 0;
}