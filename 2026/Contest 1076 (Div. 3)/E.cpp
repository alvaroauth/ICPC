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
    ll t ; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> dp(n+1, 1e9+7);
        forn(i, n){
            ll aux; cin >> aux;
            dp[aux] = 1;
        }

        forr(div, 1, n+1){
            for(int i = div; i <= n; i += div)
                dp[i] = min(dp[i], dp[div] + dp[i/div]);

            if (dp[div] == 1e9+7) cout << -1;
            else cout << dp[div];
            cout << " ";
        }
        cout << "\n";
    }
}