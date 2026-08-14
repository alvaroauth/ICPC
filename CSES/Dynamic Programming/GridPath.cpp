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
const ll INF = 1e6 + 5;
const ll MOD = 1e9+7;

bool puedoDerecha(vector<vector<char>> &mat, int i, int j, int n){
    return (((j + 1) < n) && (mat[i][j+1] != '*'));
}

bool puedoAbajo(vector<vector<char>> &mat, int i, int j, int n){
    return (((i + 1) < n) && (mat[i+1][j] != '*'));
}

void dbgmat(vector<vector<ll>> &mat, int n){
    cout << endl;
    forn(i, n){
        forn(j, n){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

ll suma(ll a, ll b){
    return (((a % MOD) + (b % MOD)) % MOD);
}

int main(){
    ll n; cin >> n;
    vector<vector<char>> mat(n, vector<char> (n));
    vector<vector<ll>> cont(n, vector<ll> (n, 0));

    forn(i, n)
        forn(j, n)
            cin >> mat[i][j];

    if (mat[0][0] != '*'){
        cont[0][0] = 1;
        forn(i, n){
            forn(j, n){
                if (puedoDerecha(mat, i, j, n)) cont[i][j+1] = suma(cont[i][j+1], cont[i][j]);
                if (puedoAbajo(mat, i, j, n)) cont[i+1][j] = suma(cont[i+1][j], cont[i][j]);
            }
        }
        // dbgmat(cont, n);
        cout << cont[n-1][n-1] << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}