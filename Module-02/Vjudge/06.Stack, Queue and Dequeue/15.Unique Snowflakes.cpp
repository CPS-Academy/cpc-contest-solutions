#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue<int> q;
        set<int> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            while (st.count(x)) {
                st.erase(q.front());
                q.pop();
            }
            st.insert(x);
            q.push(x);
            ans = max(ans, (int)q.size());
        }
        cout << ans << '\n';
    }
}
