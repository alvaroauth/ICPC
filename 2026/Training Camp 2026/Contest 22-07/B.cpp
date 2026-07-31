#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    FIN;
    ll t, n;
    cin >> t;
    vector<ll> v;
    while(t--){
        cin >> n;
        v.push_back(n);
    
    }
    for(ll j=0; j<v.size(); j++){
        n = v[j];
        if (n % 2 == 0) {
            ll cant = n / 2;
            for(ll i=0; i<cant; i++){
                cout << 1;
            }
            cout << "\n";
        } else {
            cout << 7;
             ll cant = n / 2;
             cant--;
            for(ll i=0; i<cant; i++){
                cout << 1;
            }
            cout << "\n";
        }
    }
    return 0;
}