#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e18;
typedef long long ll;

// upsolve
int main() {
    ll a, b; cin >> a >> b;
    
    if ((b-a)>4) cout << "0" << "\n";
    else if(a==b){
        cout << 1 << endl;
        return 0;
    }
    else{
        
        if (b == 0) b = 1;
        if (a == 0) a = 1;
        ll res = b % 10;
        for(ll i = b - 1; i > a; i--){
            res = ((res % 10)*(i % 10))%10;
        }
        cout << res << "\n";
    }
    return 0;
}