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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n), ord(n);

        forn(i, n) cin >> v[i], ord[i] = v[i];

        sort(all(ord));
        auto num = v.begin();
        auto o = ord.begin();

        while (*(num) == *(o)) num++, o++;

        // if (num != v.end())
            reverse(num+1, v.end());

        forn(i, n) cout << v[i] << " ";
        cout << "\n";
    }
}