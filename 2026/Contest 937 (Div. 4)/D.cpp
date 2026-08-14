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
const ll INF = 1e5 + 7;

vector<ll> bindec(){
    vector<ll> aux;
    forr(i, 2, INF){
        bool cumple = true;
        ll act = i;
        while (act != 0){
            if (act % 10 > 1){
                cumple = false;
                break;
            }
            act /= 10;
        }
        if (cumple) aux.pb(i);
    }
    return aux;
}

int main(){
    ll t; cin >> t;
    vector<ll> bd = bindec();

    while(t--){
        ll n; cin >> n;
        bool puedo = true;
        if (find(all(bd), n) == bd.end()){
            while ((puedo) && (n != 1)){
                bool encontre = false;
                for (auto b : bd){
                    // cout << "N: " << n << "   Divisor: " << b << "\n";
                    if (n % b == 0){
                        n /= b;
                        encontre = true;
                        break;
                    }
                }
                if (!encontre){
                    puedo = false;
                    break;
                }
            }
        }
        if (puedo) cout << "YES\n";
        else cout << "NO\n";
    }
}