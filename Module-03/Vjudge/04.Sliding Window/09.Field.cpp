#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v(26, 0);

    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        int a;
        char b;
        cin >> a >> b;

        v[b-'a'] = a;
    }

    int l = 0, r = -1;
    vector<int> cnt(26, 0);
    int condition_satisfy_count = 0;
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        r = i;

        cnt[s[i]-'a']++;

        if(cnt[s[i]-'a']==v[s[i]-'a']){
            condition_satisfy_count++;
        }

        if(condition_satisfy_count==k){
            ans = r-l+1;
            break;
        }
    }

    while(1){
        if(cnt[s[l]-'a']==v[s[l]-'a']) condition_satisfy_count--;
        cnt[s[l]-'a']--;
        l++;

        if(condition_satisfy_count!=k){
            while(r+1 < n){
                r++;
                cnt[s[r]-'a']++;

                if(cnt[s[r]-'a']==v[s[r]-'a']){
                    condition_satisfy_count++;
                }

                if(condition_satisfy_count==k){
                    break;
                }
            }
        }

        if(condition_satisfy_count==k){
            ans = min(ans, r-l+1);
        }
        else {
            break;
        }
    }

    if(ans==INT_MAX){
        cout << "Andy rapopo\n";
    }
    else {
        cout << ans << '\n';
    }

    
    return 0;
}
