#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define pb push_back
using namespace std;
using ll = long long;

void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0;
  ans += n / (a + b) * a;
  if (n % (a + b) >= a) ans += a;
  else ans += n % (a + b);
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
