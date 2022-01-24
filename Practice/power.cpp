#include<iostream>

using namespace std;
int count = 0;
int powerOpt(int n, int p) {
	count ++;
	cout << "Call : " << count << endl;
	if (p == 0) { return 1; }

	int temp = powerOpt(n, p / 2);
	temp = temp * temp;
	if (n % 2 == 0) { return temp; }
	else { return temp * n; }

}


int main() {
	int n, p; cin >> n >> p;
	// int mul = n;  here n is changing so to avoid this.
	powerOpt(n, p);
	int mul = 1;
	while (p != 0) {
		// n *= mul;  here n is getting updates with * mul
		mul *= n;  //now ou mul will get updated with * n
		p--;
	}

	cout << mul << "\n";
	cout << n << "\n";
	// O(n) -> complexity


}