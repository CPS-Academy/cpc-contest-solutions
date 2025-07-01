
#include <bits/stdc++.h>
 
using namespace std;
/*
4 C = 1
  1->2
  2->1
  3->1
 
ans = 2 + 1;
1 
1 
2 
3 -> ara[i] - C = 2
*/
 
 
 
int main () {
	int n, m;
	cin >> n >> m;
	map < int, int > cnt;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		cnt[x]++;
	}
	for (int i = 0, x; i < m; i++) {
		cin >> x;
		auto it = cnt.upper_bound(x);
		if (it == cnt.begin()) {
			cout << -1 << endl;
			continue;
		}
		it--;
		cout << it->first << endl;
		cnt[it->first]--;
		if (cnt[it->first] == 0) cnt.erase(it->first);
	}
}