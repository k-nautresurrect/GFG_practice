#include<iostream>
#include<math.h>

using namespace std;


int recursive(int n) {
	if (n == 0)
		return 0;
	else
		return (1 + recursive(n / 10));
}

void logarithmic(int n) {
	cout << floor(log10(n) + 1) << endl;
}


int main() {
	int n; cin >> n;
	int res = 0;

	cout << recursive(n) << endl;
	logarithmic(n);
	for (; n > 0; n /= 10) { res++; }
	cout << res << endl;
}