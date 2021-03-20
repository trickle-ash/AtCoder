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
  string s;
  cin >> s;
  int ans = 0;
  Rep(i,(int)s.size() - 1) {
    if (s[i + 1] != s[i]) continue;
    if (s[i] == '0') s[i + 1] = '1';
    else s[i + 1] = '0';
    ans++;
  }
  Mins(ans, abs((int)s.size() - ans));
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
