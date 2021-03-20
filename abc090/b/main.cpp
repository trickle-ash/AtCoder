#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define Rrep(i,n) for (ll i = n - 1; i >= 0; i--)
#define All(x) x.begin(), x.end()
#define Maxs(a, b) (a = max(a, b))
#define Mins(a, b) (a = min(a, b))
using namespace std;
using ll = long long;

void solve() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  For(i, a, b + 1) {
    string s = to_string(i), t = to_string(i);
    reverse(All(t));
    if (s == t) ans++;
  }
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
