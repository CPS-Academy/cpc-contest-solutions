
#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, m;
  cin >> n >> m;
  vector < string > lst;
  map < string, bool > mp;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    lst.push_back(s);
  }
  for (int i = 0; i < m; i++) {
    cin >> s;
    mp[s] = true;
  }
  //123456
  int ans = 0;
  for (string s : lst) {
    string last3Digits = s.substr(3, 3);
    if (mp[last3Digits]) ans++;
  }
  cout << ans << endl;
  return 0;
}