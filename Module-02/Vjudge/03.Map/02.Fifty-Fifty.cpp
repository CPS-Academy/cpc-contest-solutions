
#include <bits/stdc++.h>
using namespace std;

int main () {
  map < char, int > cnt;
  char c;
  for (int i = 0; i < 4; i++) {
    cin >> c;
    cnt[c]++;
  }
  if (cnt.size() == 2) {
    auto it1 = cnt.begin();
    auto it2 = cnt.begin();
    it2++;
    if (it1->second == 2 && it2->second == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else cout << "No" << endl;
  return 0;
}