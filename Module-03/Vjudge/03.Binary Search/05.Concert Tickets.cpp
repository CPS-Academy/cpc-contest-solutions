#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int n, m, i, x;
    cin >> n >> m;
    multiset < int > st;
    for (i = 0; i < n; i++) {
        cin >> x;
        st.insert(x);
    }
    st.insert(-1);
    while (m--) {
        cin >> x;
        auto t = st.upper_bound(x);
        t--;
        cout << * t << "\n";
        if ( * t != -1) {
            st.erase(t);
        }
    }
}