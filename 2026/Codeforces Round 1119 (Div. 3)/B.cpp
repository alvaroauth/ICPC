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
        vector<ll> v(n);
        forn(i, n) cin >> v[i];
        ll par1 = 0, par2 = 0, impar = 0;
        forn(i, n){

            if ((v[i] % 2) == 0){
                if((v[i] % 4) == 0) par1++;
                else par2++;
            } 
            else impar++;
        }

        cout << max({par1, par2, impar}) << "\n";
    }
}