#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll; typedef pair<ll,ll> pll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

vector<vector<bool>> visto(1005, vector<bool> (1005, false));
vector<vector<int>> comp(1005, vector<int> (1005));
vector<vector<char>> mat(1005, vector<char> (1005));
vector<int> elem(1005*1005, 0);

int suma(int i, int j, int n, int m){
    set<int> s;

    if ((i-1 >= 0) && (mat[i-1][j] != '*')) s.insert(comp[i-1][j]);
    if ((i+1 < n) && (mat[i+1][j] != '*')) s.insert(comp[i+1][j]);
    if ((j-1 >= 0) && (mat[i][j-1] != '*')) s.insert(comp[i][j-1]);
    if ((j+1 < m) && (mat[i][j+1] != '*')) s.insert(comp[i][j+1]);

    ll cont = 0;
    for(auto pos : s) cont += elem[pos];
    return cont+1;
}

void dfs(int i, int j, int n, int m, int c){
    visto[i][j] = true;
    comp[i][j] = c;
    elem[c]++;

    if ((i-1 >= 0) && (!visto[i-1][j]) && (mat[i-1][j] != '*')) dfs(i-1, j, n, m, c);
    if ((i+1 < n) && (!visto[i+1][j]) && (mat[i+1][j] != '*')) dfs(i+1, j, n, m, c);
    if ((j-1 >= 0) && (!visto[i][j-1]) && (mat[i][j-1] != '*')) dfs(i, j-1, n, m, c);
    if ((j+1 < m) && (!visto[i][j+1]) && (mat[i][j+1] != '*')) dfs(i, j+1, n, m, c);
}

int main(){
    int n, m; cin >> n >> m;
    forn(i, n)
        forn(j, m)
            cin >> mat[i][j];

    ll cmp = 0;
    forn(i, n){
        forn(j, m){
            if ((mat[i][j] != '*') && (!visto[i][j]))
                dfs(i, j, n, m, cmp++);
        }
    }

    forn(i, n){
        forn(j, m){
            if (mat[i][j] == '*')
                cout << (suma(i, j, n, m) % 10);
            else cout << '.';
        }
        cout << "\n";
    }
}