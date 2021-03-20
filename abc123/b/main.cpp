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
  vector<int> dish(5);
  for (auto &D : dish) cin >> D;
  auto func = [](int i, int j) { return ((10 - i % 10) % 10) < ((10 - j % 10) % 10); };
  sort(All(dish), func);
  int ans = 0;
  Rep(i,4) {
    ans += dish[i];
    while (ans % 10 != 0) { ans++; }
  }
  ans += dish[4];
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
