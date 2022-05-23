#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

bool last_digit(ll n)
{
    ll mod = n % ll(1e10);
    bool b_last_digit = (mod < 10) ? true : false;
    return b_last_digit;
}

ll f(ll& n)
{
    n += 1;
    while(n%10 == 0) n /= 10;
    return n;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n = 0;
    cin >> n;

    if (n > 9)
    {
        vl reachables;
        while (last_digit(n) == false)
        {
            reachables.push_back(f(n));
        }
        cout << reachables.size() + 9 << '\n';
    }
    else
    {
        cout << 9;
    }

    return 0;
}