#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define rrep(i,n) for (ll i = n - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
	vector<vector<char>> c(4, vector<char>(4, 0));
	rep(i,4)rep(j,4) cin >> c[i][j];
	rrep(i,4) {
		rrep(j,4) {
			cout << c[i][j];
			if (j != 0) cout << ' ';
			else cout << endl;
		}
	}
}

int main() {
	solve();
	return 0;
}
