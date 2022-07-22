#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i > k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

typedef long long ll;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n * a;
    }
    else
    {
        cout << (n/m) * b + min((n%m) * a, b);
    }

    return 0;
}