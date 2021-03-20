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
  int n, m;
  cin >> n >> m;
  map<int, int> a;
  Rep(i,n) {
    int k;
    cin >> k;
    Rep(j,k) {
      int A;
      cin >> A;
      a[A]++;
    }
  }
  int ans = 0;
  for (auto &[key, value] : a) if (value == n) ans++;
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
