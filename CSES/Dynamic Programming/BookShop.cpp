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

struct item { int precio, paginas; };

int main(){
    ll n, x; cin >> n >> x;
    vector<item> libros(n);
    forn(i, n) cin >> libros[i].precio;
    forn(i, n) cin >> libros[i].paginas;

    vector<ll> dp(x+1, 0), aux(x+1, 0);
    forn(i, n){
        forn(j, x+1){
            ll resto = j - libros[i].precio;  // Plata que me sobra
            aux[j] = dp[j];  // Copio la foto vieja
            if (resto < 0) continue;
            aux[j] = max(aux[j], dp[resto] + libros[i].paginas);  // Pregunto si me conviene tomar mi libro y tomar lo mejor q puedo armar con lo q me sobra en la foto vieja, para no repetir
        }
        forn(j, x+1) dp[j] = aux[j];
    }

    ll res = -1;
    forn (i, x+1) res = max(res, dp[i]) ;

    cout << res << "\n";
}