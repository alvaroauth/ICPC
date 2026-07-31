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
        ll n, k; cin >> n >> k;
        ll res = k + (k-1)/(n-1);
        
        cout << res << "\n";
    }
}
