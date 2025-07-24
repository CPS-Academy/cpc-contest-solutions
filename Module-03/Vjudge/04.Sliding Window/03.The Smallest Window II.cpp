#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    queue<int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        q.push(x);
    }

    int present_cnt = 0;
    vector<int> cnt(k+1, 0);

    queue<int> window;

    int ans = INT_MAX;

    while(!q.empty()){
        int x = q.front();
        q.pop();

        window.push(x);
        if(x<=k){
            cnt[x]++;
            if(cnt[x]==1){
                present_cnt++;
            }
        }

        if(present_cnt==k){
            ans = window.size();
            break;
        }
    }

    while(!window.empty()){
        int x = window.front();
        window.pop();

        if(x <= k){
            cnt[x]--;
            if(cnt[x]==0){
                present_cnt--;
            }
        }

        if(present_cnt!=k){
            while(!q.empty()){
                int y = q.front();
                q.pop();
                window.push(y);
                if(y<=k){
                    cnt[y]++;
                    if(cnt[y]==1){
                        present_cnt++;
                    }
                }

                if(present_cnt==k){
                    ans = min(ans, (int) window.size());
                    break;
                }
            }
        }
        else {
            ans = min(ans, (int) window.size());
        }
    }

    if(ans == INT_MAX) ans = 0;

    cout << ans << endl;
    
    return 0;
}
