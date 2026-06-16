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
    
    int n, i, k, j;
    const int nmax = 1001;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    while(true){
        cin >> n >> k;
        for(int i = 1; k > 0 && i < primes.size() && primes[i] <= n; i++){
            for(int j = 2; j < i; j++){
                if(primes[j] + primes[j - 1] + 1 == primes[i]){
                  //  cout<< primes[i] << endl;
                    k--;
                    break;
                }
            }
        }
        if(k == 0){
            cout << "YES\n";
        }
        else cout << "NO\n";
        break;
    }
    return 0;
}
