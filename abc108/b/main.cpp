#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define All(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x3, y3, x4, y4;
  x3 = x2 + (y1 - y2);
  y3 = y2 - (x1 - x2);
  x4 = x1 + (y1 - y2);
  y4 = y1 - (x1 - x2);
  cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << endl;
}

int main() {
  solve();
  return 0;
}
