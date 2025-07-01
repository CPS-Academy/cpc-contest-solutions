
#include <bits/stdc++.h>
using namespace std;


int main () {
  int n, m;
  cin >> n >> m;
  vector < string > allStations;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    allStations.push_back(s);
  }
  map < string, bool > express;
  for (int i = 0; i < m; i++) {
    cin >> s;
    express[s] = true;
  }
  for (int i = 0; i < n; i++) {
    string name = allStations[i];
    if (express[name]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}