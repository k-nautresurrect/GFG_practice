#include <iostream>
#include <typeinfo> // for identifying types

using namespace std;

void DataTypes(int a, float b, double c, long long l, string d) {
	cout << b / c << " " << typeid(b / c).name() << endl; // double
	cout << b / a << " " << typeid(b / a).name() << endl; // float
	cout << c / a << " " << typeid(c / a).name() << endl; // double
	cout << l + (c / a) << " " << typeid(l + (c / a)).name() << endl; // double
	cout << d << " " << typeid(d).name() << endl; // NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	cout << d[3] << " " << typeid(d[3]).name() << endl; // character
}

int main() {
	int a = 1;
	float b = 2;
	double c = 3;
	long long l = 5;
	string d = "gfgc"; // in Heap
	DataTypes(a, b, c, l, d);
}