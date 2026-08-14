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
    vector<ll> b(n+2);
    ll suma = 0;

    forn(i, n+2) cin >> b[i], suma += b[i];

    auto maxi = max_element(all(b));
    ll s = *maxi;

    ll m = suma - (n+1)*s + s;

    b[maxi - b.begin()] = -1;
    auto eme = find(all(b), m);
    if (eme != b.end()) b[eme - b.begin()] = -1;
    cout << s << " " << m << "\n";
    
    // forn(i, n+2) cout << b[i] << " ";
    // cout << endl;
    vector<ll> res;
    forn(i, n+2){
        if (b[i] != -1) res.pb(s - b[i]);
    }
    
    sort(all(res));
    forn(i, n) cout << res[i] << " ";
    cout << "\n";
}

/*
2
7 3 4 4

*/