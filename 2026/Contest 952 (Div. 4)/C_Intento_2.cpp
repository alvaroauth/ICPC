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
        
        vector<ll> v(n);
        forn(i, n){
            cin >> v[i];
        }

        ll total = 0;
        if (v[0] == 0) total++;

        ll maxi = v[0], sum = v[0];
        
        forr(i, 1, n){
            sum += v[i];
            maxi = max(maxi, v[i]);
            if ((sum - maxi) == maxi) total++; 
        }
        
        // perdon tobi sos un incomprendido
        cout << total << "\n";
    }
}