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
    ll n; cin >> n;
    vector<ll> pref(n+1);
    map<ll, ll> diferencia;
    pref[0] = 0;

    ll aux;
    forn(i, n){
        cin >> aux;
        pref[i+1] = (pref[i] + (aux % n)) % n;
        diferencia[pref[i+1]] = i;
    }


}