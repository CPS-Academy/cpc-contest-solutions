#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
using namespace std;


bool* isPrime;
vector<long long int> primes;


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
    const int nmax = 1e7;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    int t = 1;
    // cin >> t;
       
    while(t--){
        cin >> n;
        long long int pcnt = 3, total = 5, add = 4, last = 9;
        while(pcnt * 100 >= n * total){ // p/t >= n/100
           
            for(int i = 0; i < 3; i++){
                last += add;
                if(last < nmax && isPrime[last]) pcnt++;
                else if(last >= nmax){
                    for(long long int p: primes){
                        if(p * p > last){
                            pcnt++;
                            break;
                        }
                        if(last % p == 0){
                            break;
                        }
                    }
                }
            }
           
            last += add;
            total += 4;
            add += 2;
        }
        cout << add - 1 << '\n';  
    }  
    return 0;
}
