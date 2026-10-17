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
const ll MOD = 1e9 + 7;

int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll max = -1, aux;
        ll pri1 = MOD;
        ll ult1 = -1;
        vector<ll> v(n);
        forn(i, n){
            cin >> aux;
            v[i] = aux;
            if (aux == 1 || aux == -1){
                if (pri1 > i) pri1 = i;
            }
            if (aux == 1 || aux == -1){
                if (ult1 < i) ult1 = i;
            }
        }

        forn(i, n){
            if (i == pri1) cout << 1 << " ";
            else if (i == ult1) cout << 1 << " ";
            else if (v[i] == -1) cout << 0 << " ";
            else cout << v[i] << " ";
        }
        cout << "\n";
    }
}