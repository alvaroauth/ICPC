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

void calcularPotencias(vector<ll> &p, ll n){
    ll num = 5;
    while (num <= n){
        p.pb(num);
        num *= 5;
    }
}

int main(){
    ll n; cin >> n;
    vector<ll> pot5;
    calcularPotencias(pot5, n);

    ll cont = 0;
    for(auto p: pot5){
        cont += n / p;
    }

    cout << cont << "\n";
}