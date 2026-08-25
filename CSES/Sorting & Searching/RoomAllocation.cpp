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
    FIN;
    ll n; cin >> n;
    queue<ll> proxima;
    multiset<pair<ll, ll>> ocupadas;
    multiset<ll> disponibles;

    vector<pair<pair<ll, ll>, ll>> enysal(n);
    vector<ll> res(n);

    ll a, b;
    forn(i, n){
        cin >> a >> b;
        enysal[i] = mp(mp(a, b),i);
    }

    sort(all(enysal));

    forn(i, n) proxima.push(i+1);
    ll max = 0;
    forn(i, n){
        auto es = enysal[i];
        
        auto it = ocupadas.begin();
        while ((it != ocupadas.end()) and (it->first < es.first.first)){
            disponibles.insert(it->second);
            auto aux = it;
            it++;
            ocupadas.erase(aux);
        }

        if (disponibles.size() == 0){
            max++;
            ll prox = proxima.front(); proxima.pop();
            ocupadas.insert({es.first.second, prox});
            res[es.second] = prox;
        }
        else{
            ll prox = *(disponibles.begin());
            ocupadas.insert({es.first.second, prox});
            disponibles.erase(disponibles.begin());
            res[es.second] = prox;
        }
    }

    cout << max << "\n";
    forn(i, res.size()){
        cout << res[i] << " ";
    }
    cout << "\n";
}