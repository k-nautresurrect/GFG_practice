#include<iostream>

using namespace std;

int gcdr(int a, int b) {
	if (a == 0)
		return b;
	return gcdr(b % a, a);
}

int main() {
	int a, b;  cin >> a >> b;
	int res  = max(a, b);
	while (true) {
		if (res % a == 0 && res % b == 0) {
			break;
		}
		res++;
	}
	cout << res << endl;
	cout << (a * b) / gcdr(a, b) << endl;
	return 0;
}