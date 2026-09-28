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
    vector<ll> v(n), subseq;
    forn(i, n) cin >> v[i];
 
    for(auto elem: v){
        auto mayor = lower_bound(subseq.begin(), subseq.end(), elem);
        if (mayor == subseq.end()) subseq.pb(elem);
        else *mayor = elem;
    }
 
    cout << subseq.size() << "\n";
}