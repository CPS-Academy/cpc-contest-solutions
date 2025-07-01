
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    map < string, bool > allNames;
    while (n--) {
        string name;
        cin >> name;
        if (allNames[name] == true) cout << "YES" << endl;
        else cout << "NO" << endl;
        allNames[name] = true;
    }
    return 0;
}