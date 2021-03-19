#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int n, d, x;
	cin >> n >> d >> x;
	ll ans = 0;
	rep(i, n) {
		int a;
		cin >> a;
		int day = 1;
		while(day <= d) {
			day += a;
			ans++;
		}
	}
	cout << ans + x << endl;
	return 0;
}
