#include <iostream>

using namespace std;

void optprmfactor(int n) {
	if (n <= 1)
		return ;
	while (n % 2 == 0) { cout << 2 << endl; n = n / 2;}
	while (n % 3 == 0) { cout << 3 << endl; n = n / 3; }
	for (int i = 5; i * i <= n; i += 6) {
		while (n % i == 0) { cout << i << endl; n /= i; }
		while (n % (i + 2) == 0) { cout << i + 2 << endl; n /= (i + 2); }
	} if (n > 3) {
		cout << n << endl;
	}
}

void prmfactr(int n) {
	if (n <= 1)
		return ;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			cout << i << endl;
			n = n / i;
		}
	}
	if (n > 1)
		cout << n << endl;
}

int main() {
	int n;  cin >> n;
	prmfactr(n);
	optprmfactor(n);
	for (int i = 2; i <= n; i++) {
		if (i == 2 || i == 3 || (i - 1) % 6 == 0 || (i + 1) % 6 == 0) {
			while (n % i == 0) {
				cout << i << endl;
				n = n / i;
			}
		}
	}
	return 0;
}