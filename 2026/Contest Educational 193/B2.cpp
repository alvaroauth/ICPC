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
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        vector<ll> v(n);

        cin >> v[0];
        int swap = -1, repe = 0;
        bool doble = false, dist = false;
        forr(i, 1, n){
            cin >> v[i];
            if ((v[i] == v[i-1])){
                repe++;
                if ((!doble) && (swap == -1)){
                    swap = i;
                    dist = true;
                }
                
                else if ( (!doble) && (swap != -2) && v[swap-1] != i && (v[swap+1] != i) && v[swap] != i && v[i] != v[swap] && (i < n-1 || v[i+1] != v[swap]) && v[i-1] != v[swap]){
                    doble = true;
                    repe--;
                }
            }
            if (((dist) && swap != -2 && v[i] != v[swap] && v[i-1] != v[swap] && (i < n-1 || v[i+1])) || i == swap+1 || i == swap-1){
                repe--;
                swap = -2;
            }
        }

        cout << n - repe << "\n";
    }
}