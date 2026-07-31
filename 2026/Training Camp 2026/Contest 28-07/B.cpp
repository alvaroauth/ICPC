#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(v) (v).begin(), (v).end()
#define sz(v) ((ll)(v).size())
#define forr(i,a,n) for(ll i = (ll)(a); i < (ll)(n); i++)
#define forn(i,n) forr(i,0,(n))
#define FIN ios::sync_with_stdio(false); cin.tie(0);

int main(){
	FIN;
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
        vector<ll> ora(n), can(n);

        ll minCan = 1e10, minOra = 1e10;
        forn(i, n){
            cin >> can[i];
            minCan = min(minCan, can[i]);
        } 
        forn(i, n){
            cin >> ora[i];
            minOra = min(minOra, ora[i]);
        } 

        ll cant = 0;
        forn(i, n){
            if (can[i] > minCan && ora[i] > minOra){
                ll mini = min(can[i]-minCan, ora[i]-minOra);
                can[i] -= mini; ora[i] -= mini;
                cant += mini;
            }
            if(can[i] > minCan){
                ll mini = can[i] - minCan;
                can[i] -= mini; cant += mini;
            }
            if(ora[i] > minOra){
                ll mini = ora[i] - minOra;
                ora[i] -= mini; cant += mini;
            }
        }
        cout << cant << "\n";
	}
}
