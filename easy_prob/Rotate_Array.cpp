#include<iostream>

using namespace std;

int main(){
	int T;  cin >> T;
	while(T-- > 0){
		int n, d;  cin >> n >> d;
		int arr[n], arrd[n], temp;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i< d; i++){
			arrd[(n-1)-i] = arr[i];
		}
		for(int i = 0; i < n-d; i++){
			arrd[i] = arr[(n-d-1) + i];
		}

		for (int i = 0; i < n; ++i)
		{
			cout << arrd[i] << " ";
		}
		cout << "\n";
	}
}