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
    while (t--){
        ll num; cin >> num;
        ll aux = num;

        ll cont = 0;
        ll rep = 1;
        while (aux >= 10){
            cont += 9;
            aux /= 10;
            rep = rep * 10 + 1;
        }
        cont += num/rep;
        cout << cont << "\n";
    }
}
