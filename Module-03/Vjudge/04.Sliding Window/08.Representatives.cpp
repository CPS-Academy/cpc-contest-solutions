#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int k;
            cin >> k;
            v.push_back({k, i});
        }
    }

    sort(v.begin(), v.end());

    queue<pair<int, int>> q;
    for(auto it: v){
        q.push(it);
    }

    map<int, int> cnt;
    deque<pair<int, int>> window;

    int ans = INT_MAX;

    while(!q.empty()){
        auto st = q.front();
        q.pop();

        window.push_back(st);
        cnt[st.second]++;

        if(cnt.size()==n){
            ans = st.first - window.front().first;
            break;
        }
    }

    while(!window.empty()){
        auto st = window.front();
        window.pop_front();

        cnt[st.second]--;
        if(cnt[st.second]==0){
            cnt.erase(st.second);
        }

        if(cnt.size()<n){
            while(!q.empty()){
                auto st2 = q.front();
                q.pop();

                window.push_back(st2);
                cnt[st2.second]++;

                if(cnt.size()==n){
                    break;
                }
            }
        }

        if(cnt.size()!=n){
            break;
        }
        else {
            ans = min(ans, window.back().first - window.front().first);
        }
    }

    cout << ans << endl;
    
    return 0;
}
