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

const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 7;
vector<vector<ll>> dp(7, vector<ll>(6, 0));

void aumentar_rango(ll num, ll i){
    forn(j, 6){
        if (((i*6)+(j+1)) <= num)
            dp[i][j] = dp[i-1][j] * 6;
        else if ((num - ((i*6)+(j+1))) > 0)
            dp[i][j] = dp[i-1][j] * (num - ((i*6)+(j+1)));
        else
            dp[i][j] = dp[i-1][j];
    }
}

int main(){
    ll n; cin >> n;

    ll aux = (n >= 6)? 6 : n;

    forn(i, aux){
        dp[0][i] = 1;
    }
    forr(i, aux, 6){
        dp[0][i] = 0;
    }

    forr(i, 1, n+1){
        aumentar_rango(n, i);
    }

    ll suma = 0;
    forn(i, 6){
        suma += dp[n][i];
    }

    cout << suma << "\n";
    return 0;
}