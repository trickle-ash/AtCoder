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
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &A : a) cin >> A;
  vector<int> b(n);
  b = a;
  sort(All(b));
  for (auto A : a) {
    if (A == b[n - 1]) cout << b[n - 2] << endl;
    else cout << b[n - 1] << endl;
  }
}

int main() {
  solve();
  return 0;
}
