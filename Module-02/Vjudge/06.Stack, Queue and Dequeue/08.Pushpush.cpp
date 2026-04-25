#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a){
        cin>>x;
    }
    deque<int>b;
    for(int i=0;i<n;i++){
        if(i%2==0){
            b.push_back(a[i]);
        }
        else{
            b.push_front(a[i]);
        }
    }
    if(n%2==0){
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            cout<<b[i]<<" ";
        }
    }
}
