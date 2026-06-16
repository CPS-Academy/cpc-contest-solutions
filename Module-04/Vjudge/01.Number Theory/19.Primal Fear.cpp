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
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
    
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


int main() {
    
    long long int n;
    const int nmax = 1e6;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    queue<pair<int, int>> q;
    q.push({3, 10});
    q.push({7, 10});
    
    bool* isAns = new bool[nmax + 1];
    for(int i = 0; i <= nmax; i++) isAns[i] = false;
    isAns[2] = true;
    isAns[5] = true;
    
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        isAns[cur.first] = true;
        for(int i = 1; i <= 9; i++){
            int neu = cur.first + cur.second * i;
            if(neu <= nmax && isPrime[neu]){
                q.push({neu, 10 * cur.second});
            }
        }
    }
    
    
    int* pref = new int[nmax + 1];
    pref[0] = 0;
    for(int i = 1; i <= nmax; i++) pref[i] = pref[i - 1] + isAns[i];
    
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        cout << pref[n] << endl;
        
    }
    
    return 0;
}
