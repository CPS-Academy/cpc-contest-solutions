#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<long long int> primes;

const long long int mod = 1e9 + 7;

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
    long long int n, x, ans;
    const int nmax = 3e6;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    cin >> t;
        
    while(t--){
        cin >> n;
        long long int q;
        for(long long int p: primes){
            if(n % p == 0){
                if((n / p) % p == 0){
                    // p is actually p
                    q = n / p / p;
                }
                else{
                    q = p;
                    p = sqrt(n / q);
                }
                
                cout << p << ' ' << q << '\n';
                break;
            }
        }
        
    }
    
    return 0;
}
