#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define Rrep(i,n) for (ll i = n - 1; i >= 0; i--)
#define maxs(a, b) (a = max(a, b))
#define mins(a, b) (a = min(a, b))
#define All(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
  int a, b;
  string s;
  cin >> a >> b >> s;
  bool ok = ((int)s.size() == a + b + 1) && (s.substr(a, 1) == "-");
  Rep(i,s.size()) {
    if (i == a) continue;
    if (s[i] == '-') ok = false;
  }
  cout << (ok ? "Yes" : "No") << endl;
}

int main() {
  solve();
  return 0;
}
