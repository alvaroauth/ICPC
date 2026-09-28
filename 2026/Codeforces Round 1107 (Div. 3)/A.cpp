#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while (t--){
        ll x, y; cin >> x >> y;
        if ((x % y) == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}