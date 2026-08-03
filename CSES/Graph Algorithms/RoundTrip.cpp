#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

vector<vector<ll>> ady;
vector<bool> visto;
set<ll> ciclos;
stack<ll> reco;

void dfs(int prev, int act){
    visto[act] = true;
    
    for(ll next : ady[act]){
        if (!visto[next])
            dfs(act, next);
        else if (prev != next)
            ciclos.insert(next);
    }
}

bool camino(int ini, int prev, int act){
    visto[act] = true;
    reco.push(act);
    bool encontre = false;

    for(ll next : ady[act]){
        if (encontre) break;
        if (!visto[next])
            encontre = camino(ini, act, next);
        else if ((next == ini) && (next != prev)){
            reco.push(next);
            return true;
        }
    }

    if (!encontre) reco.pop();
    return encontre;
}

int main(){
    ll n, m; cin >> n >> m;
    ady.resize(n);
    visto.resize(n, false);

    forn(i, m){
        ll a, b; cin >> a >> b;
        a--; b--;
        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    forn(i, n){
        if (!visto[i]){
            dfs(i, i);
        }
    }

    if (!ciclos.empty()){
        fill(visto.begin(), visto.end(), false);
        camino(*(ciclos.begin()), *(ciclos.begin()), *(ciclos.begin()));
        cout << reco.size() << "\n";
        while (!reco.empty()){
            cout << reco.top()+1 << " "; reco.pop();
        }
    }
    else cout << "IMPOSSIBLE";
    cout << "\n";
}