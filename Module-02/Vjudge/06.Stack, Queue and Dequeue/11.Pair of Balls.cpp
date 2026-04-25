#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<queue<pair<int,int>>> a;
    queue<pair<int,int>> work_q;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        queue<pair<int,int>> q;
        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;
            q.push({x, i});
        }
        work_q.push({q.front()});
        q.pop();
        a.push_back(q);
    }

    set<int> st;
    map<int,int> mp;

    while(work_q.size()) {
        auto [x, ind] = work_q.front();
        work_q.pop();

        if(st.count(x)) {
            st.erase(x);
            n--;
            if(a[ind].size()) {
                work_q.push({a[ind].front()});
                a[ind].pop();
            }
            ind = mp[x];
            if(a[ind].size()) {
                work_q.push({a[ind].front()});
                a[ind].pop();
            }
        } else {
            st.insert(x);
            mp[x] = ind;
        }
    }

    if(n) cout << "No\n";
    else cout << "Yes\n";
}
