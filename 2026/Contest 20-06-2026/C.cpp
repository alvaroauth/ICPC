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
    int t;
    cin >> t;
    while (t--){
        ll n, x, aux, total = 0;
        vector<ll> v(n);
        cin >> n >> x;
        
        forn(i, n){
            cin >> aux;
            total += aux;
        }

        ll abajo = 1, arriba = ((total + x)/ n) + 1;
        
        while (abajo != (arriba + 1)){
            
        }
    }
}