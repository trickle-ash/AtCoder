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
  string a, b;
  cin >> a >> b;
  if (a.size() > b.size()) cout << "GREATER" << endl;
  else if (a.size() < b.size()) cout << "LESS" << endl;
  else {
    int n = (int)a.size();
    Rep(i,n) {
      if (a[i] == b[i]) continue;
      else if (a[i] > b[i]) cout << "GREATER" << endl;
      else cout << "LESS" << endl;
      return ;
    }
    cout << "EQUAL" << endl;
  }
}

int main() {
  solve();
  return 0;
}
