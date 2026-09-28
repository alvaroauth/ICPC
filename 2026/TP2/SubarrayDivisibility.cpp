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

ll negapos(ll n, ll num){
    if (num < 0){
        ll aux = num / n;
        aux--; aux *= -1;
        num += (aux)*n;
    }
    return num;
}

int main(){
    ll n; cin >> n;
    vector<ll> pref(n+1);
    vector<ll> encontre(n+1, 0);
    pref[0] = 0;

    ll aux;
    forn(i, n){
        cin >> aux;
        pref[i+1] = (pref[i] + (negapos(n, aux) % n)) % n;
    }

    ll cont = 0;
    forn(i, n+1){
        cont += encontre[pref[i]];
        encontre[pref[i]]++;
    }

    cout << cont << "\n";
}