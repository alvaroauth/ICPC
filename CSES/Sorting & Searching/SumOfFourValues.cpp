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

bool repetido(pair<ll, ll> p1, pair<ll, ll> p2){
    return ((p1.first == p2.first) or (p1.first == p2.second) or (p1.second == p2.first) or (p1.second == p2.second));
}

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> v(n);
    forn(i, n) cin >> v[i];
    vector<ll> res(4);

    set<pair<ll, pair<ll, ll>>> pares;

    forn(i, n){
        forr(j, i+1, n){
            pares.insert({v[i]+v[j],{i+1, j+1}});
        }
    }

    bool pude = false;
    for (auto p1 : pares){
        ll busc = x - p1.first;
        auto p2 = pares.lower_bound({busc,{-1, -1}});

        while ((p2 != pares.end()) and (p2->first == busc) and (repetido(p1.second, p2->second))){
            p2++;
        }

        if ((p2 != pares.end()) and (p2->first == busc) and !(repetido(p1.second, p2->second))){
            res[0] = p1.second.first;
            res[1] = p1.second.second;
            res[2] = p2->second.first;
            res[3] = p2->second.second;
            pude = true;
            break;
        }
    }

    if (pude) forn(i, 4) cout << res[i] << " ";
    else cout << "IMPOSSIBLE";
    cout << "\n";
}