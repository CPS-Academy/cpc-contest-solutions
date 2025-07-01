
#include <bits/stdc++.h>
using namespace std;


int main () {
	map < string, int > voteCnt;
	int n;
	cin >> n;
	string name;
	int maxCnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> name;
		voteCnt[name]++;
		maxCnt = max(voteCnt[name], maxCnt);
	}
	for (auto p : voteCnt) {
		if (p.second == maxCnt) cout << p.first << endl;
	}
	return 0;
}