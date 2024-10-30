#include <iostream>

using namespace std;
typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n = 0;
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