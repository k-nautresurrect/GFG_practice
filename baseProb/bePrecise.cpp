#include <iostream>
#include <iomanip> // for set precision, fixed

using namespace std;

void bePrecise(double a, double b) {
	cout << a / b << endl;
	// with fixed included it will exclude the ciel count.
	cout << fixed << setprecision(3) << (double)a / b << endl; // precise counting the ceil value
}
int main() {
	double a = 5.43;
	double b = 2.653;
	bePrecise(a, b);
	double price = 200;
	double db = 1;
	bePrecise(price, db);
}