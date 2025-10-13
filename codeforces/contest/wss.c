#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    set<long long> d;
    for(long long i = 2; i * i <= n; ++i){
        long long x = i * i;
        while(x <= n){
            d.insert(x);
            x *= i;
        }
    }
    cout << n - d.size() << endl;
}
