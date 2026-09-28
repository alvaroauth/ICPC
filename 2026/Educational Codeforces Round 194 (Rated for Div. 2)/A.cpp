#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll cont0 = 0;
        vector<ll> v(n);
        forn(i, n){
            cin >> v[i];
            if (v[i] == 0) cont0++;
        }
    
        if (n == 1 && cont0 == 1) cout << 0;
        else if (n == 1) cout << -1;
        else if (n >= 2 && cont0 == 1) cout << -1;
        else{
            ll total = 0;
            bool ok = true;
            if (v[0] == 1){
                if (cont0 > 0){
                    total++;
                    cont0--;    
                }
                else ok = false;
            }
            if (v[n-1] == 1){
                if (cont0 > 0){
                    total++;
                    cont0--;
                }
                else ok = false;
            }
    
            if (ok) cout << total;
            else cout << -1;
        }
        cout << "\n";
    }
}