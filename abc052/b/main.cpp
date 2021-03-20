#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define maxs(a, b) (a = max<ll>(a, b))
#define mins(a, b) (a = min<ll>(a, b))
#define All(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> x(n, 0);
  Rep(i,n) {
    if (s[i] == 'I') x[i] = 1;
    else x[i] = -1;
  }
  vector<int> X(n + 1, 0);
  Rep(i,n) X[i + 1] += X[i] + x[i];
  int ans = 0;
  for (auto y : X) maxs(ans, y);
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
