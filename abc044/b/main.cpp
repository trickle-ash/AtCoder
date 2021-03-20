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
  string w;
  cin >> w;
  map<char, int> W;
  Rep(i,(int)w.size()) W[w[i]]++;
  bool ans = true;
  for (auto &[key, value] : W) if (value % 2 != 0) ans = false;
  cout << (ans ? "Yes" : "No") << endl;
}

int main() {
  solve();
  return 0;
}
