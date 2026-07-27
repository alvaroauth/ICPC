#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)
const ll INF = 1e9 + 7;
int main(){
    ll n; cin >> n;
    vector<ll> v(n);
    forn(i, n) cin >> v[i];
    v.push_back(INF);
    v.push_back(-INF);
    sort(v.begin(), v.end());
    
    ll q; cin >> q;
    while (q--){
        ll l, r;
        cin >> l >> r;
        ll ii = 0, id = n + 1, di = 0, dd = n + 1;

        while (ii != id-1){
            ll med = (ii + id)/2;
            if (v[med] >= l) id = med;
            else ii = med;
        }
        l = id;
        
        while (di != dd-1){
            ll med = (di + dd)/2;
            if (v[med] > r) dd = med;
            else di = med;
        }
        r = dd;
        
        cout << (r-l) << " ";
    }
}