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

ll dist(pair<ll, ll> p){
    return llabs(p.first - p.second);
}

int main(){
    // ll x, n, pos; cin >> x >> n;
    
    // multiset<pair<ll, pair<ll, ll>>> ms;
    // pair<ll, ll> maxi = {0, x};
    // ms.insert({0, 8});

    // forn(i, n){
    //     cin >> pos;
    //     auto calle = ms.lower_bound({pos, -1});
    //     auto seg1 = {pos, calle->first};
    //     auto seg2 = {calle->second, pos};

        
    // }
}