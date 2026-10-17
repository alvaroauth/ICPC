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

int main(){

    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);

    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];

    vector<vector<ll>> dp(n+1, vector<ll> (m+1, 0));

    forr(i, 1, n+1){
        forr(j, 1, m+1){
            if (a[i-1] == b[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
            } 
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[n][m] << "\n";
    vector<ll> res;
    ll i = n, j = m;
    while ((i > 0) && (j > 0)){
        if (a[i-1] == b[j-1]){
            res.pb(a[i-1]);
            i--; j--;
        } 
        else if (dp[i][j-1] > dp[i-1][j]) j--;
        else i--;
    }
    reverse(all(res));
    for(auto e: res) cout << e << " ";
}