#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (auto &A : a) cin >> A;
	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= x) ans++, x -= a[i];
		else break;
	}
	if (ans == n && x) ans--;
	cout << ans << endl;
	return 0;
}
