#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

vector<ll> grupos;
vector<vector<ll>> ady; 
vector<bool> visto;

void dfs(int prev, int act, int gr, bool &puedo){
    visto[act] = true;
    grupos[act] = gr;


    if (gr == 1) gr = 2;
    else gr = 1;

    for(ll next : ady[act]){
        if (!visto[next]) dfs(act, next, gr, puedo);
        else if ((next != prev) && (grupos[next] != gr)) puedo = false;
    }
}

int main(){
    ll n, m; cin >> n >> m;
    ady = vector<vector<ll>> (n);
    visto = vector<bool> (n);
    grupos = vector<ll> (n);

    forn(i, m){
        int a, b; cin >> a >> b;
        a--; b--;
        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    bool puedo = true;
    forn(i, n){
        if (!visto[i]){
            dfs(i, i, 1, puedo);
        }
    }
    if (puedo)
        forn(i, n)
            cout << grupos[i] << " ";
    else
        cout << "IMPOSSIBLE";
    cout << "\n";
}