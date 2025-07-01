#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, c, d, e, f;

        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        int mx = a;
        int mn = a;
        int sum = a+b+c;

        if(b > mx){
            mx = b;
        }
        if(c > mx){
            mx = c;
        }

        if(b < mn){
            mn = b;
        }
        if(c < mn){
            mn = c;
        }
        
        int x = sum - mx - mn;

        int alice = mx*100 + x*10 + mn;

        mx = d;
        mn = d;
        sum = d+e+f;

        if(e > mx){
            mx = e;
        }
        if(f > mx){
            mx = f;
        }

        if(e < mn){
            mn = e;
        }
        if(f < mn){
            mn = f;
        }

        d = sum - mx - mn;

        int bob = mx*100 + d*10 + mn;

        if(alice > bob){
            printf("Alice\n");
        }
        else if(bob > alice){
            printf("Bob\n");
        }
        else {
            printf("Tie\n");
        }
    }

    return 0;
}