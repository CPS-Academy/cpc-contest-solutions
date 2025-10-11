#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back({{x,0},i});
        a.push_back({{y,1},i});
    }
    sort(a.begin(),a.end());
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    vector<int>room_id(n);
    for(int i=0;i<a.size();i++){
        if(a[i].first.second==0){
            room_id[a[i].second]=q.top();
            q.pop();
        }
        else{
            q.push(room_id[a[i].second]);
        }
    }
    cout<<*max_element(room_id.begin(),room_id.end())<<'\n';
    for(int i=0;i<n;i++){
        cout<<room_id[i]<<" ";
    }
}