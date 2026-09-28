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
    ll n, m; cin >> n >> m;
    vector<ll> alfajores(n), oficinas(1);

    forn(i, n) cin >> alfajores[i];
    cin >> oficinas[0];
    oficinas[0] = -oficinas[0];
    forr(i, 1, m){
        ll aux; cin >> aux;
        if (-aux > oficinas[oficinas.size()-1])
            oficinas.pb(-aux);
    }

    // for(auto o: oficinas) cout << o << " ";
    // cout << endl;

    for(auto al: alfajores){
        ll alfa = al;
        bool fin = false;
        while (not (fin)){
            // cout << "antes: " << alfa << endl;
            auto of = lower_bound(all(oficinas), -alfa);
            if (of == oficinas.end()) fin = true;
            else alfa %= *of;
            // cout << "despues: " << alfa << endl;
            // cout << endl;
        }
        cout << alfa << " ";
    }

    cout << "\n";
}