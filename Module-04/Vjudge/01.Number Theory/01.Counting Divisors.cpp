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
    
    int n, x;
    cin >> n;
    const int xmax = 1e6;
    generatePrimes(xmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        int ans = 1;
        int lim = sqrt(x);
        for(int p: primes){
            if(p * p > x) break;
            int cnt = 0;
            while(x % p == 0){
                x /= p;
                cnt++;
            }
            ans *= (cnt + 1);
        }
        // x == 1 is always true (not anymore!!!)
        // now x is either 1 or any single prime number
        if(x == 1){
            // work done
        }
        else{
            ans *= 2;
            // since x = p power 1, we have (1 + 1) times more divisors
        }
        cout << ans << '\n';
    }
    return 0;
}
