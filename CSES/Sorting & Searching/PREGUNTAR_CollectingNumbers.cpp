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

    vector<ll> v(n);
    forn(i, n) cin >> v[i];

    ll max = -(2e5 + 7);
    ll cont = 0;
    ll a = n-1;
    while (v[a] != 1) a--;

    for(int i = a; i >= 0; i--){
        if (v[i] > max){
            max = v[i];
            cont++;
        }
    }
    cout << cont << "\n";
    return 0;
}