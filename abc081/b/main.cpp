#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define pb push_back
using namespace std;
using ll = long long;

ll divisible(ll n) {
  int res = 0;
  while (n % 2 == 0) { n /= 2; res++; }
  return res;
}

void solve() {
  int n;
  cin >> n;
  ll ans = 1e18;
  rep(i,n) {
    ll a;
    cin >> a;
    ans = min(ans, divisible(a));
  }
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
