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
    while (t--){
        ll n; cin >> n;
        vector<ll> v(n), parejas;
        vector<vector<ll>> noNecesito(n+1, vector<ll> {-1});

        forn(i, n){
            cin >> v[i];
        }
        
        forr(i, 1, n){
            if (v[i] == v[i-1] && (find(all(parejas), v[i]) == parejas.end())){
                noNecesito[i][0] = (v[i-1]);
                noNecesito[i].push_back(v[i]);
                parejas.push_back(i);
            }
        }

        if (parejas.size() >= 2){
            bool match = false;
            for(auto p: parejas){
                forn(i, n){
                    if ((i != p) && (noNecesito[i][0] != -1) && (noNecesito[i][0] != p) && (noNecesito[i][1] != p) && (noNecesito[p][0] != -1) && (noNecesito[p][0] != i) && (noNecesito[p][1] != i)){
                        match = true;
                        break;
                    }
                }
                if (match) break;
            }

            if (match) cout << n - parejas.size() + 2;
            else cout << n - parejas.size();
        }
        else if (parejas.size() == 1){
            cout << n-1;
        }
        else cout << n;
        cout << "\n";
    }
}