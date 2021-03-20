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
  ll num = -1;
  Rep(i, (int)s.size()) {
    if (s[i] != '.') continue;
    num = i;
    break;
  }
  if (num == -1) cout << s << endl;
  else {
    string t = s.substr(0, num);
    cout << t << endl;
  }
}

int main() {
  solve();
  return 0;
}
