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
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
typedef unordered_map<char, int> umap_ci;

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

int solve(int students, int questions, vs answers, vi scores)
{
	string const possible_answers = "ABCDE";
	vi max_for_q;
	REP(i, questions)
	{
		umap_ci answer_freq =
		{
			{'A', 0},
			{'B', 0},
			{'C', 0},
			{'D', 0},
			{'E', 0}
		};

		REP(j, students)
		{
			char c = answers.at(j)[i];
			answer_freq[c] += 1;
		}

		int max = 0;
		for(auto& letter : possible_answers)
		{
			max = (answer_freq[letter] > max) ? answer_freq[letter] : max;
		}

		max_for_q.push_back(max);
	}

	int result = 0;
	REP(i, scores.size())
	{
		result += (scores.at(i) * max_for_q.at(i));
	}

	return result;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int s, q;
	vs answers;
	vi scores;
	cin >> s >> q;
	REP(i, s)
	{
		string aux = " ";
		cin >> aux;
		answers.push_back(aux);
	}

	REP(i, q)
	{
		int aux = 0;
		cin >> aux;
		scores.push_back(aux);
	}

	int result = solve(s, q, answers, scores);
	cout << result;
}