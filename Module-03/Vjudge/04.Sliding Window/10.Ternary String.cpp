#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        queue<int> q;
        for(char c: s){
            q.push(c-'0');
        }

        queue<int> window;
        vector<int> cnt(4, 0);

        int ans = INT_MAX;

        while(!q.empty()){
            int x = q.front();
            q.pop();
            window.push(x);
            cnt[x]++;

            if(cnt[1]>0 && cnt[2]>0 && cnt[3]>0){
                ans = window.size();
                break;
            }
        }

        while(!window.empty()){
            int x = window.front();
            window.pop();
            cnt[x]--;

            if(cnt[x]==0){
                while(!q.empty()){
                    int x = q.front();
                    q.pop();
                    window.push(x);
                    cnt[x]++;
        
                    if(cnt[1]>0 && cnt[2]>0 && cnt[3]>0){
                        break;
                    }
                }
            }

            if(cnt[1]>0 && cnt[2]>0 && cnt[3]>0){
                ans = min(ans, (int) window.size());
            }
        }

        if(ans==INT_MAX) ans = 0;

        cout << ans << '\n';
    }
    
    return 0;
}
