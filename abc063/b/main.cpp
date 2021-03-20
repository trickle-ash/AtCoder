#include <bits/stdc++.h>
#define For(i,a,n) for (ll i = a; i < (n); i++)
#define Rep(i,n) for (ll i = 0; i < (n); i++)
#define All(x) x.begin(), x.end()
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  set<char> t;
  int n = s.size();
  Rep(i,n) t.insert(s[i]);
  cout << (s.size() == t.size() ? "yes" : "no") << endl;
}

int main() {
  solve();
  return 0;
}
