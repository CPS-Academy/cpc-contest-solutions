
#include <bits/stdc++.h>
using namespace std;


int main () {
	int n;
	cin >> n;
	map < string, string > nameToNumber;
	while (n--) {
		string name, number;
		cin >> name >> number;
		nameToNumber[name] = number;
	}
	string name;
	while (cin >> name) {
		if (nameToNumber.find(name) == nameToNumber.end()) {
			cout << "Not found" << endl;
		}
		else {
			cout << name << "=" << nameToNumber[name] << endl;
		}
	}
	return 0;
}