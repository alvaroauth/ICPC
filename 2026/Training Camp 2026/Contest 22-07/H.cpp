#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

// upsolved

bool contenido(pair<ll, ll> uno, pair<ll, ll> dos){
    return ((uno.first >= dos.first)&&(uno.second <= dos.second));
}

int main(){
    FIN;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> res(n);
        pair<ll, ll> uno, dos;
        string res = "1 2 ";

        ll l, r; cin >> l >> r;
        uno.first = l; uno.second = r;
        forr(i, 1, n){
            cin >> l >> r;
            pair<ll,ll> par = {l, r};

            if (!(contenido(uno, par))){
                if ()
            }
        }
    }
}