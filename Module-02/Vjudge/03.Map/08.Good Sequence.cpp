
#include <bits/stdc++.h>
using namespace std;
int main () {
  map < int, int > cnt;
  int n;
  cin >> n;
  for (int i =0, x; i < n; i++) {
    cin >> x;
    cnt[x]++;
  }
  int ans = 0;
  for (auto p : cnt) {
    int number = p.first;
    int freq = p.second;
    if (number < freq) {
      ans += freq - number;
    }
    else if (number > freq) {
      ans += freq;
    }
  }
  cout << ans << endl;
  return 0;
}