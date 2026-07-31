#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

ll binpow(ll a, ll b){
    ll res = 1;
    
    while (b > 0){
        if (b % 2 == 1) res = res * a;
        a = a * a;
        b /= 2;
    }
    return res;
}
ll dfs(ll x, vector<vector<ll>> &g, vector<bool> &visto){
    visto[x] = true;
    ll cont = 0;
    for( auto u: g[x]){
        if (!visto[u]) {
            cont += dfs(u, g, visto) ;
        }
        
    }
    //cout << cont << endl;
    return cont + 1;
}


int main(){
    ll n, m, x, y;
    
    cin >> n >> m;
    vector<vector<ll>> g(n);
    for(ll i=0; i<m; i++){
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ll res = 1;
    vector<bool> visto(n, false);
    ll cont = 0;
    for(ll i=0; i<n; i++){
        if (!visto[i]){
            cont += dfs(i, g, visto);
            res *= binpow(2, cont-1);
            cont = 0;

        } 
        

    }
    
    cout << res << "\n";
    
}
