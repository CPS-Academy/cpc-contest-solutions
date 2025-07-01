
#include <bits/stdc++.h>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	map < pair < int, int > , string > mp;
	for (int i = 0; i < n; i++) {
		int x, y;
		string s;
		cin >> x >> y >> s;
		mp[make_pair(x, y)] = s;
	}
	int m;
	cin >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		cout << mp[make_pair(x, y)] << endl;
	}
	return 0;
} 