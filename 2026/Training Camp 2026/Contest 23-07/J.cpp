#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll t; cin >> t;

    while (t--){
        ll n, k; cin >> n >> k;
        multiset<ll> s;

        ll aux;
        forn(i, n){
            cin >> aux;
            s.insert(-aux);
        }

        k = min(k, n);
        ll sum = 0, maxi = -1;
        auto it = s.begin();
        forn(i, k){
            sum += (*it)*-1;
            it++;
            maxi = max(maxi, sum);
        }

        cout << maxi << "\n";
    }
}