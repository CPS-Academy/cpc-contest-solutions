#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
// #include <pair>
using namespace std;

bool* isPrime;
// vector<int> primes;

const long long int mod = 1e9 + 7;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    // primes.clear();
    isPrime[0] = false, isPrime[1] = false; isPrime[2] = true;
    for(int i = 3; i <= n; i+=2) isPrime[i] = true;
    for(int i = 4; i <= n; i+=2) isPrime[i] = false;
    
    // primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            // primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    return;
}

int a, b, k;

bool ok(int len){
    int cnt = 0, i, j;
    for(i = a; i < a + len; i++){
        if(isPrime[i])
            cnt++;
    }
    if(cnt < k) return false;
    for(i = a + 1, j = a + len; j <= b; i++, j++){
        if(isPrime[i - 1]) cnt--;
        if(isPrime[j]) cnt++;
        
        if(cnt < k) return false;
    }
    
    return true;
}


int main() {
    
    const int nmax = 1e6 + 3;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1, ans;
    // cin >> t;
    while(t--){
        cin >> a >> b >> k;
        // [lo, hi) // wrong, not doing it anymore
        // (lo, hi]
        int lo = 0, hi = b - a + 1, mid;
        if(!ok(hi)) ans = -1;
        else{
            while(hi - lo > 1){
                mid = (lo + hi) >> 1;
                if(ok(mid)){
                    hi = mid;
                }
                else{
                    lo = mid;
                }
            }
            ans = hi;
        }
        cout << ans << endl;
    }
    
    return 0;
}
