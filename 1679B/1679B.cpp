#include <bits/stdc++.h>
using namespace std;

#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i > k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

typedef vector<string> vs;
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
typedef map<ll, ll> mll;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;

/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
*/


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n = 0, a = 0, q = 0;
	cin >> n >> q;

	vl arr(n);
	REP(i, n)
	{
		cin >> a;
		arr.at(i) = a;
	}

	ll arr_sum = 0;
	for (ll& elem : arr)
	{
		arr_sum += elem;
	}

	vector<pll> fq(n);
	for (ll i = 0; i<n; i++)
	{
		fq[i] = {0, arr.at(i)};
	}
	pll sq = {0, 0};

	for (ll j = 1; j <= q; j++)
	{
		char t; ll i; ll x;
		cin >> t;
		if (t == '1')
		{
			cin >> i >> x;
			i -= 1;
			if (sq.first > fq[i].first)
			{
				arr.at(i) = sq.second;
			}
			else
			{
				arr.at(i) = fq[i].second;
			}
			arr_sum -= arr.at(i);
			fq[i] = {j, x};
			arr_sum += fq[i].second;
		}
		else
		{
			cin >> x;
			sq = {j, x};
			arr_sum = n * x;
		}
		cout << arr_sum << '\n';
	}
}