#include<iostream>

using namespace std;

int main() {
	int T;  cin >> T;
	while (T-- > 0) {
		int n, d;  cin >> n >> d;
		int arr[n], arrd[n], temp;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = d - 1; i >= 0 ; i--) {
			temp = arr[i];
			arr[i] = arr[(n - 1) - i];
			arr[(n - 1) - i] = temp;
		}

		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}