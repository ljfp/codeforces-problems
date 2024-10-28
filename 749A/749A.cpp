#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	if (n % 2 == 0) {
		n /= 2;
		cout << n << endl;
	} else {
		n = (n / 2) - 1;
		cout << n + 1 << endl << 3 << " ";
	}

	for(int i = 0; i < n; i++) cout << 2 << " ";
	cout << endl;
}