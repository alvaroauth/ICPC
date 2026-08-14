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

int main(){
    ll n, c; cin >> n >> c;
    vector<ll> dp(c+5, INF); 
    set<ll> monedas;
    ll aux;

    forn(i, n){
        cin >> aux;
        if (aux <= c){
            dp[aux] = 1;
            monedas.insert(aux);
        }
    } 

    forr(i, 1, c+1){
        if (dp[i] == 1) continue;
        for(auto m : monedas){
            if (m > i) break;
            ll busc = i - m;
            if (dp[busc] != INF) dp[i] = min(dp[i], dp[busc] + 1);
        }
    }
    if (dp[c] == INF) dp[c] = -1;
    cout << dp[c] << "\n";
}