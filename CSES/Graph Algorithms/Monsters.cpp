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
queue<pair<ll, ll>> mons;
bool encontre = false;
pair<ll, ll> salida;

vector<int> movsy = {0, 0, 1, -1};
vector<int> movsx = {1, -1, 0, 0};
vector<char> movsDir = {'R', 'L', 'D', 'U'};

vector<vector<pair<pair<ll, ll>, char>>> padre;

bool esSalida(int i, int j, int n, int m){
    return ((i == 0) || (i == n-1) || (j == 0) || (j == m-1));
}

bool noMeCaigo(int i, int j, int n, int m){
    return ((i >= 0) && (i < n) && (j >= 0) && (j < m));
}

void bfs(pair<ll, ll> en, int n, int m){
    queue<pair<ll, ll>> chabon;
    chabon.push({en.first, en.second});

    while ((chabon.size() > 0) && (!encontre)){

        ll cantM = mons.size();
        forn(i, cantM){
            auto [im, jm] = mons.front(); mons.pop();
            forn(i, 4){
                ll ym = im + movsy[i] ; ll xm = jm + movsx[i];
                if ((noMeCaigo(ym, xm, n, m)) && (mat[ym][xm] != '#') && (!visto[ym][xm])){
                    visto[ym][xm] = true;
                    mons.push({ym, xm});
                }
            }
        }
        
        ll cantC = chabon.size();
        forn(i, cantC){
            auto [ii, jj] = chabon.front(); chabon.pop();
            if (esSalida(ii, jj, n, m)){
                encontre = true;
                salida.first = ii; salida.second = jj;
            }
            forn(i, 4){
                ll y = ii + movsy[i]; ll x = jj + movsx[i];
                if (noMeCaigo(y, x, n, m) && (mat[y][x] != '#') && (mat[y][x] != 'M') && (!visto[y][x]) && (!encontre)){
                    chabon.push({y, x});
                    visto[y][x] = true;
                    padre[y][x].first = {ii, jj}; padre[y][x].second = movsDir[i];
                }
            }
        }
    }

}

int main(){
    FIN;
    ll n, m; cin >> n >> m;
    pair<ll, ll> entrada;

    mat.resize(n, vector<char> (m));
    visto.resize(n, vector<bool> (m, false));
    padre.resize(n, vector<pair<pair<ll, ll>,char>> (m, {{-1, -1}, 'N'}));

    forn(i, n){
        forn(j, m){
            cin >> mat[i][j];
            if (mat[i][j] == 'A') entrada = {i, j};
            else if (mat[i][j] == 'M') mons.push({i, j});
        }
    }

    visto[entrada.first][entrada.second] = true;
    bfs(entrada, n, m);
    stack<char> pila;
    auto act = salida;

    if (encontre){
        cout << "YES\n";
        
        while (padre[act.first][act.second].first.first != -1 ){
            pila.push(padre[act.first][act.second].second);
            act = padre[act.first][act.second].first;
        }

        cout << pila.size() << "\n";

        while (pila.size() > 0){
            cout << pila.top();
            pila.pop();
        }
    }
    else cout << "NO\n";
}