#include <iostream>
#include <cmath> // for round floor ceil trunc

using namespace std;

void typecast(double &d) {
	d = (int)d; // it will just gives the floor value not roundoff
}

int main() {
	double d = 10.48;
	cout << d << endl; // 10.99
	cout << floor(d) << endl; // 10
	cout << ceil(d) << endl;  // 11

	cout << round(d) << endl; // 11
	cout << nearbyint(d) << endl; // 11
	cout << rint(d) << endl; // 11

	cout << trunc(d) << endl;// 10
	typecast(d); // 10
	cout << d << endl;
}
