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
  int n, m;
  cin >> n >> m;
  vector<int> card(n, 0);
  Rep(i, m) {
    int l, r;
    cin >> l >> r;
    l--;
    card[l]++; card[r]--;
  }
  Rep(i,n) if (0 < i) card[i] += card[i - 1];
  int ans = 0;
  for (auto C : card) if (C == m) ans++;
  cout << ans << endl;
}

int main() {
  solve();
  return 0;
}
