#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define All(x) x.begin(), x.end()
#define pb push_back
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  int n = (int)s.size();
  ll ans = 1e9;
  Rep(i, n - 2) {
    int t = stoi(s.substr(i, 3));
    ans = min<ll>(ans, abs(753 - t));
  }
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
