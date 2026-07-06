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

// UPSOLVEADO
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        
        forn(i, n){
            cin >> v[i];
        }

        ll abajo = 1, arriba = 1e10;
        ll suma;
        while (abajo != (arriba - 1)){
            ll medio = (abajo+arriba)/2;
            suma = 0;
            forn(i, n){
                if (v[i] < medio) suma += medio - v[i];
            }
            cout << "Arriba: " << arriba << "   Abajo: " << abajo << "  Medio: " << medio << "  Suma: " << suma << "\n";
            if (suma > x) arriba = medio;
            else abajo = medio;
        }
        cout << abajo << "\n";
    }
}