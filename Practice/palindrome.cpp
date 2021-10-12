#include<iostream>
#include<cmath>

using namespace std;

int  main() {
	int n; cin >> n;
	int rev = 0, tmp = n;
	while (tmp != 0) {
		int l = tmp % 10;
		rev = rev * 10 + l;
		tmp /= 10;
	}
	cout << (n == rev) << endl;
	return 0;
}