#include <bits/stdc++.h>
using namespace std;


#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

//UPSOLVEADO

int main(){
    ll t; cin >> t;
    while (t--){
        ll n, l, r; cin >> n >> l >> r;
        
        vector<ll> v(n);
        forn(i, n) cin >> v[i];

        sort(v.begin(), v.end());
        ll cont = 0;
        forn(i, n){
            ll piso = lower_bound(v.begin()+i+1, v.end(), (l-v[i])) - v.begin();

            ll techo = upper_bound(v.begin()+i+1, v.end(), (r-v[i])) - v.begin ();
            
            cont += techo - piso;
        }

        cout << cont << "\n";   
    }
}   

