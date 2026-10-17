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
const ll MOD = 1e9 + 7;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    forn(i, n) cin >> v[i];

    vector<vector<ll>> dp(n+1, vector<ll> (m+2, 0));
    if (v[0] == 0) forr(i, 1, m+1) dp[0][i] = 1;
    else dp[0][v[0]] = 1;

    forr(i, 1, n){
        if (v[i] != 0){
            dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]]) % MOD;
            ll mn = min(m+1, v[i]+1);
            if (mn != m+1) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][mn]) % MOD;
            ll mx = max(0LL, v[i]-1);
            if (mx != 0LL) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][mx]) % MOD;
        }
        else{
            forr(j, 1, m+1){
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
                dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD;
            }
        }
    }
    ll cont = 0;
    forn(i, m+1){
        cont = ((cont + dp[n-1][i]) % MOD);
    }
    cout << cont << "\n";
}