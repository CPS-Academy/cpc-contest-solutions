#include <iostream>

using namespace std;

int main() {
    pair < int, int > p;
    cin >> p.first >> p.second;
    if (p.first + p.second + (p.first * p.second) == 111) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    // your code goes here
    return 0;
}
