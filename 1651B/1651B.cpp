#include <bits/stdc++.h>
using namespace std;

string solve()
{
	string result;
	int n;
	cin >> n;

	// For any positive integer array A, we define operation O as following:
	// 1. Choose to indices i and j (i =/= j)
	// 2. Set Ai = Aj = |Ai - Aj|

	// For an array A of n elements, the total sum of A will decrease after performing O, unless
	// it's an array of shape: A = [a1, a2 >= 3a1, a3 >= 3a2, ..., an >= 3an-1]
	// Since 1 <= Ai <= 10^9, we need to check if 3^(n-1) <= 10^9

	if (pow(3, n-1) <= pow(10, 9))
	{
		result += "YES\n";
		vector<int> counterexample(n);
		for (int i=0; i<n; i++)
		{
			result = result + to_string(int(pow(3, i))) + " ";
		}
	}
	else
	{
		result += "NO";
	}

	return result;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int tests, i=0;
	cin >> tests;
	string results[tests];

	while (tests--)
	{
		results[i] = solve();
		i++;
	}

	for (string& e: results)
	{
		cout << e << endl;
	}

	return 0;
}