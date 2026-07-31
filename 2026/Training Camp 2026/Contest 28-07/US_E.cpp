#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(v) (v).begin(), (v).end()
#define sz(v) ((ll)(v).size())
#define forr(i,a,n) for(ll i = (ll)(a); i < (ll)(n); i++)
#define forn(i,n) forr(i,0,(n))
#define FIN ios::sync_with_stdio(false); cin.tie(0);

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        forn(i, n) cin >> v[i];

        sort(v.begin(), v.end());
        ll total = 0;

        forn(i, n){
            ll cant = (upper_bound(v.begin(), v.end(), (v[i] + 2)) - v.begin()) - i - 1;
            
            if (cant > 2)
                total += ((cant*(cant-1)/2));   
        }
        cout << total << "\n";
    }
}
