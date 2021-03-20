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
  int n, q;
  long k;
  cin >> n >> k >> q;
  vector<int> p(n);
  Rep(i,q) {
    int a;
    cin >> a;
    p[a - 1]++;
  }
  Rep(i,n) {
    if (p[i] + k - q > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

int main() {
  solve();
  return 0;
}
