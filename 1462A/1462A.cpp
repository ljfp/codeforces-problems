#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> sequence(n);
	for (int &e : sequence) {
		cin >> e;
	}

	int left = 0, right = n - 1;
	vector<int> favorite(n);
	for (int i = 0; i < n; i++) {
	if (i % 2 == 0) {
		favorite[i] = sequence[left++];
	} else {
		favorite[i] = sequence[right--];
	}
	}

	for (int i : favorite) {
		cout << i << " ";
	}
	cout << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int tests;
	cin >> tests;
	while (tests--) {
	solve();
	}
	return 0;
}