#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll n; cin >> n;
    vector<ll> v(n);

    forn(i, n) cin >> v[i];

    forn(i, n){
        while ((v[i] % 2 == 0))
            v[i] = v[i]/2;

        while ((v[i] % 3 == 0))
            v[i] = v[i]/3;
    }

    ll elem = v[0];
    bool puede = true;

    forn(i, n){
        if (v[i] != elem){
            puede = false;
            break;
        }
    }

    if (puede) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}