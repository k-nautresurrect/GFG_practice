#include <iostream>
#include <algorithm> //for swap fuction

using namespace std;

/*
	impelmentation for general swap

	template<class T> void swap ( T &a, T &b ){
		T c(a); a = b; b = c;
	}
*/

int main() {
	int a = 3, b = 5;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}