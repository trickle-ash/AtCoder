#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
using namespace std;
using ll = long long;

ll battle(ll n) {
  if (n == 1) return 1;
  return battle(n / 2) * 2 + 1;
}

void solve() {
  ll h;
  cin >> h;
  cout << battle(h) << endl;
}

int main() {
  solve();
  return 0;
}
