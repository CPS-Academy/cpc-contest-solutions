#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
    
    primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    for(; i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    
    return;
}

int main() {
    
    long long int l, r, ans;
    const int nmax = 32000;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    
    int t = 1;
    // cin >> t;
    while(t--){
        cin >> l >> r;
        int len = r - l + 1;
        int* prmcnt = new int[len];
        int* dividend = new int[len];
        for(int i = 0; i < len; i++) prmcnt[i] = 0;
        for(int i = 0; i < len; i++) dividend[i] = i + l;
        
        for(int i = 0; i < primes.size(); i++){
            int p = primes[i];
            for(int pmul = ((l + p - 1) / p) * p; pmul <= r; pmul += p){
                int pmul_copy = pmul;
                while(pmul % p == 0){
                    pmul /= p;
                    dividend[pmul_copy - l] /= p;
                    prmcnt[pmul_copy - l]++;
                }
                pmul = pmul_copy;
            }
        }
        
        for(int i = 0; i < len; i++){
            if(dividend[i] > 1) prmcnt[i]++;
            // if(prmcnt[i] == 0) prmcnt[i] = 1;
        }
        
        int ans = 0;
        for(int i = 0; i < len; i++){
            if(((prmcnt[i] & 1) && isPrime[prmcnt[i]]) || prmcnt[i] == 2) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
