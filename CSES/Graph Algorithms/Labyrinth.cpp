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

vector<vector<char>> mat;
vector<vector<bool>> visto;
vector<vector<pair<pair<ll, ll>, char>>> padre;
pair<ll, ll> entrada, salida;

vector<int> movsy = {0, 0, 1, -1};
vector<int> movsx = {1, -1, 0, 0};
vector<char> movs = {'R', 'L', 'D', 'U'};

void bfs(int n, int m){
    queue<pair<ll, ll>> cola;
    cola.push(entrada);
    cola.push({-1, -1});
    visto[entrada.first][entrada.second] = true;

    while(cola.size() > 0){
        auto [ii, jj] = cola.front(); cola.pop();

        if (ii != -1){
            forn(i, 4){
                ll y = ii+movsy[i] , x = jj+movsx[i];
                if (x >= 0 && x < m && y >= 0 && y < n && visto[y][x] == false && mat[y][x] != '#'){
                    cola.push({y, x});
                    padre[y][x] = {{ii, jj}, movs[i]};
                    visto[y][x] = true;
                }
            }
        }
        else if (cola.size() > 0){  
            cola.push({-1, -1});
        }
    }
}

int main(){
    FIN;
    ll n, m; cin >> n >> m;
    mat.resize(n, vector<char>(m));
    visto.resize(n, vector<bool>(m));
    padre.resize(n, vector<pair<pair<ll, ll>, char>> (m, {{-1, -1}, 'F'}));
    
    ll dist = 0;

    forn(i, n){
        forn(j, m){
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                entrada = {i, j};
            else if (mat[i][j] == 'B')
                salida = {i, j};
        }
    }

    bfs(n, m);
    if (padre[salida.first][salida.second].first.first != -1){
        cout << "YES\n";
        stack<char> pila;


        pair<ll,ll> act = salida;
        while (act != entrada) {
            dist++;
            pila.push(padre[act.first][act.second].second);
            act = padre[act.first][act.second].first;
        }

        cout << dist <<  "\n";
        while(pila.size() > 0){
            auto elem = pila.top(); pila.pop();
            cout << elem;
        }
    }
    else cout << "NO";

    cout << "\n";
}