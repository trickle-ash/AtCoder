#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A), b(B);
  rep(i,A) cin >> a[i];
  rep(i,B) cin >> b[i];
  vector<int> x(M), y(M), c(M);
  rep(i,M) cin >> x[i] >> y[i] >> c[i];
  ll ans = 1e18;
  rep(i,M) ans = min<ll>(ans, a[x[i] - 1] + b[y[i] - 1] - c[i]);
  sort(all(a)); sort(all(b));
  ans = min<ll>(ans, a[0] + b[0]);
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
