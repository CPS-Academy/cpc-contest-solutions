
#include <bits/stdc++.h>
using namespace std;
 
 
 
int main () {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int n, r;
		cin >> n >> r;
		string ans = "possible";
		map < pair < int, int > , bool > mark;
		for (int ln = 0; ln < r; ln++) {
			int id, code;
			cin >> id >> code;
			if (mark[{id, code}] == true) {
				ans = "impossible";
			}
			mark[{id, code}] = true;
		}
		cout << "Scenario #"<< tc << ": " << ans << endl;
	}
return 0;
}
 
 
 
// '5' -> 54 - 48 
 