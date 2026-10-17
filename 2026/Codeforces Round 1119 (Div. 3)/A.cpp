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
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        ll i = 0;
        ll cant = 0;
        while (i < n){
            ll lugar = 0;
            ll j = 0;
            while ((i < n) && (j < k)){
                if (s[i] == '0') lugar++;
                i++;
                j++;
            }
            if (lugar == 0) cant++;
        }
        cout << cant << "\n";
    }
}