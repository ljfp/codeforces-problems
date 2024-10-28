#include <bits/stdc++.h>
using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;


void fastscan(ll &number)
{
	//variable to indicate sign of input number
	bool negative = false;
	register ll c;

	number = 0;

	// extract current character from buffer
	c = getchar();
	if (c=='-')
	{
		// number is negative
		negative = true;

		// extract the next character from the buffer
		c = getchar();
	}

	// Keep on extracting characters if they are integers
	// i.e ASCII Value lies from '0'(48) to '9' (57)
	for (; (c>47 && c<58); c=getchar())
		number = number *10 + c - 48;

	// if scanned input has a negative sign, negate the
	// value of the input number
	if (negative)
		number *= -1;
}

string solve(ll number)
{
	int last_digit = number % 10; int counter = 0;
	// Remember: number must be >0
	int size = trunc(log10(number)) + 1;

	FOR(i, 0, size, 1)
	{
		if (last_digit == 4 || last_digit == 7)
		{
			counter += 1;
		}
		number /= 10;
		last_digit = number % 10;
	}

	if (counter == 4 || counter == 7)
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll number;
	fastscan(number);

	string result = solve(number);
	cout << result << "\n";
	return 0;
}