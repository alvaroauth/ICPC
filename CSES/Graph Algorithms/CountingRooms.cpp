#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)
const ll MAXN = 1005;

vector<vector<bool>> visto(MAXN, vector<bool> (MAXN, false));
vector<vector<char>> mat(MAXN, vector<char> (MAXN));
 
void dfs (int i, int j, int n, int m){
    visto[i][j] = true;
 
    if ((i-1 >= 0) && (!visto[i-1][j]) && (mat[i-1][j] != '#')) dfs(i-1, j, n, m);
    if ((i+1 < n) && (!visto[i+1][j]) && (mat[i+1][j] != '#')) dfs(i+1, j, n, m);
    if ((j-1 >= 0) && (!visto[i][j-1]) && (mat[i][j-1] != '#')) dfs(i, j-1, n, m);
    if ((j+1 < m) && (!visto[i][j+1]) && (mat[i][j+1] != '#')) dfs(i, j+1, n, m);
 
}
int main(){
    FIN;
    ll n, m; cin >> n >> m;
 
    forn(i, n)
        forn(j, m)
            cin >> mat[i][j];
        
    ll cant = 0;
    forn(i, n){
        forn(j, m){
            if ((mat[i][j] != '#') && (!visto[i][j])){
                dfs(i, j, n, m);
                cant++;
            }
        }
    }
    cout << cant << "\n";
}