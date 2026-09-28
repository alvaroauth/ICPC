#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, a) forr(i, 0, a)
#define pb push_back

int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        vector<ll> a(n), b(n), c(n);
        forn(i, n) cin >> a[i];
        forn(i, n) cin >> b[i];
        forn(i, n) c[i] = a[i] - b[i];

        bool puedo = true;
        for(int i = n-1; i > 0; i--){
            if (c[i] > 0){
                c[i-1] = c[i-1] + c[i];
            }
        }
        
        if (c[0] > 0) puedo = false;
        if (puedo) cout << "YES\n";
        else cout << "NO\n";
    }
}