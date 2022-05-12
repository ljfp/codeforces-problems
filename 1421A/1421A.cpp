#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int a, b, x;
    cin >> a >> b;

    // The number that minimizes (a XOR x) + (b XOR x)
    // will be the result of (a AND b) because the
    // minimal value will be attained when two 1s
    // are found in the same place in the base2 representations of
    // a and b (1 XOR 1 is 0).

    x = a & b;
    return (a ^ x) + (b ^ x);
}

int main()
{
    int tests, i=0;
    cin >> tests;
    vector<int> results(tests);

    while (tests--)
    {
        results[i] = solve();
        i++;
    }

    for (int& e: results)
    {
        cout << e << endl;
    }

    return 0;
}