#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
};
bool cmp(point a,point b){
    if(a.x<b.x)return true;
    if(b.x<a.x)return false;
    if(a.y>b.y)return true;
    return false;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<point>a(n);
        for(int i=0;i<n;i++){
            scanf("%d%d",&a[i].x,&a[i].y);
        }
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<n;i++){
            printf("%d %d\n",a[i].x,a[i].y);
        }
    }
}
