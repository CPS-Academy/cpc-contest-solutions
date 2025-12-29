#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y,id;
};
bool cmpx(point a,point b){
    if(a.x<b.x){
        return true;
    }
    return false;
}
bool cmpy(point a,point b){
    if(a.y<b.y){
        return true;
    }
    return false;
}
bool cmpid(point a,point b){
    if(a.id<b.id){
        return true;
    }
    return false;
}
int main() {
    int h,w,n;
    cin>>h>>w>>n;
    point a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;
        a[i].id=i;
    }
    sort(a,a+n,cmpx);
    int t=1,prev_x=a[0].x;
    a[0].x=1;
    for(int i=1;i<n;i++){
        if(prev_x!=a[i].x)t++;
        prev_x=a[i].x;
        a[i].x=t;
    }
    sort(a,a+n,cmpy);
    t=1;
    int prev_y=a[0].y;
    a[0].y=1;
    for(int i=1;i<n;i++){
        if(prev_y!=a[i].y)t++;
        prev_y=a[i].y;
        a[i].y=t;
    }
    sort(a,a+n,cmpid);
    for(int i=0;i<n;i++){
        cout<<a[i].x<<" "<<a[i].y<<'\n';
    }
}
