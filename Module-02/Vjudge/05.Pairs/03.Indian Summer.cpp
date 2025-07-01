#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    set < pair < string, string >> st;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        st.insert({
            s1,
            s2
        });
    }
    cout << st.size() << '\n';
}
