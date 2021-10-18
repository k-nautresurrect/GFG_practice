#include<iostream>

using namespace std;

int chckprm(int n) {
	if (n == 2) { return 1; }
	else if (n == 3) { return 1; }
	else if ((n + 1) % 6 == 0 || (n - 1) % 6 == 0) { return 1; }
	else { return 0; }
}

int prmchk(int n) {
	if (n == 1) { return 0; }
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int optprmchk(int n) {
	if (n == 1) { return 0; }
	else if (n == 2) { return 1; }
	else if (n == 3) { return 1; }
	else {
		if ( n % 2 == 0 || n % 3 == 0) { return 0; }
		else {
			for (int i = 5; i * i <= n; i += 6) {
				if (n % i == 0 || n % (i + 2) == 0) { return 0; }
			}
			return 1;
		}
	}
}

int main() {
	int i, n; cin >> n;
	cout << chckprm(n) << endl;
	cout << prmchk(n) << endl;
	cout << optprmchk(n) << endl;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			break;
	}
	if (i == n) { cout << n << " no is prime." << endl; }
	else { cout << n << " no is not prime." << endl; }
	return 0;
}