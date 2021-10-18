#include<iostream>
#include<vector>

using namespace std;

void sieve(int n) {
	vector<bool> isPrime(n + 1, true);
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			cout << i << " ";
		}
	}
}


void optseive(int n) {
	vector<bool> isPrime(n + 1, true);
	for (int i = 2; i <= n ; i++) {
		if (isPrime[i]) {
			cout << i << " ";
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
}



int main() {
	sieve(200);
	cout << endl;
	optseive(200);
	cout << endl;
	return 0;
}