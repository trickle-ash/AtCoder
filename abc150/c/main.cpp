#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define pb push_back
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n), p(n), q(n);
	for (auto &P : p) cin >> P;
	for (auto &Q : q) cin >> Q;
	iota(all(v), 1);
	int a = 0, b = 0, i = 1;
	do {
		if (v == p) a = i;
		if (v == q) b = i;
		i++;
	} while (next_permutation(all(v)));
	cout << abs(a - b) << endl;
}

int main() {
	solve();
	return 0;
}
