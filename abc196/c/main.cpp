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
  ll n;
  cin >> n;
  for (ll i = 1; ;i++) {
    if (stoll(to_string(i) + to_string(i)) > n) {
      cout << i - 1 << endl;
      return ;
    }
  }
}

int main() {
  solve();
  return 0;
}
