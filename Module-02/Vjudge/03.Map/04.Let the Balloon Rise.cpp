
#include <bits/stdc++.h>
using namespace std;

int main () {
	// (key, value)
	
	while(1) {
		map < string, int > cnt;
		string s;
		int n;
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> s;
			cnt[s]++;
		}
		int maxCnt = 0;
		string ans = "";
		for (auto pr : cnt) {
			if (pr.second > maxCnt) {
				maxCnt = pr.second;
				ans = pr.first;
			}
		}
		cout << ans << endl;
	}
	return 0;
}