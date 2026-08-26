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
    ll t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        bool puedo = true;
        if ((a > (2*b)) or (b > (2 * a))) puedo = false;
        if ((a + b) % 3 != 0) puedo = false;
        
        if (puedo) cout << "YES\n";
        else cout << "NO\n";
    }
}