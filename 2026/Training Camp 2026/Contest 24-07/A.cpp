#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t; cin >> t;
    
    while (t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        ll ud = 1;
        ll maxi = v[n-1];
        for (int i = n - 2; i > -1; i--){
            if (v[i] > maxi){
                ud++;
                maxi = v[i];
            }
        }
        
        cout << (ud-1) << "\n";
    }

}
