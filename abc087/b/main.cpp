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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  a++; b++; c++;
  int ans = 0;
  Rep(i,a) Rep(j,b) Rep(k,c) if(x == 500 * i  + 100 * j + 50 * k) ans++;
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
