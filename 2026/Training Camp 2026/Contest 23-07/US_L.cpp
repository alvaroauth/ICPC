#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    FIN;
    ll n; cin >> n;
    vector<ll> v(n);

    forn(i, n) cin >> v[i];

    ll i = 1;
    ll maxi = -1;

    ll cont = 1;
    forn(i, n - 1){
        if (v[i] <= v[i+1]){
            cont++;
        }
        else{
            maxi = max(maxi, cont);
            cont = 1;
        }
    }
    maxi = max(maxi, cont);

    cout << maxi << "\n";
}