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


// UPSOLVEADO
int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        
        vector<ll> v(n), dp(n);
        cin >> v[0];
        dp[0] = v[0];
        forr(i, 1, n){
            cin >> v[i];
            dp[i] = dp[i-1] + v[i];
        }

        ll total = 0;
        if (v[0] == 0) total++;

        
        // cout << " --- Vector DP: ";
        // forn(i, n) cout << dp[i] << " ";
        // cout << "\n";
        // cout << " --- Vector: ";
        // forn(i, n) cout << v[i] << " ";
        // cout << "\n";
        

        forr(i, 1, n){
            for(int j = 0; j <= i; j++){
                // cout << "DP: " << dp[i] << "   Vector: " << v[j] << "\n";
                if ((dp[i] - v[j]) == v[j]){
                    total++;
                    // cout << "Sumo!\n";
                    break;
                }
            }
        }
        //tobi salia con dp anda a buscarla al angulo

        cout << total << "\n";
    }
}