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
        string s = "";

        ll cont0 = 0;
        ll aux;
        forn(i, n){
            cin >> aux;
            if (aux == 0){
                if (cont0 == 0){
                    s += "A";
                } else {
                    s += "B";
                }
                cont0++;
            } else {
                s += "C";
            }
        }

        if (cont0 == 1) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << s << "\n";
        }
    }
}