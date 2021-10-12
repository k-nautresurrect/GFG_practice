#include<iostream>

using namespace std;

int gcde(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int gcdr(int a, int b) {
	if (a == 0)
		return b;
	return gcdr(b % a, a);
}

int main() {
	int a, b, res = 1; cin >> a >> b;
	if (a > b) {
		for (int i = 2; i <= a; i++) {
			if (a % i == 0 && b % i == 0) { res = i; }
		}
	} else {
		for (int i = 2; i <= b; i++) {
			if (a % i == 0 && b % i == 0) { res = i; }
		}
	}
	cout << res << endl;
	// cout << gcde(a, b) << endl;

	cout << gcdr(a, b) << endl;
	int itr = min(a, b);
	while (itr > 0) {
		if (a % itr == 0 && b % itr == 0) { break; }
		itr--;
	}
	cout << itr << endl;

}