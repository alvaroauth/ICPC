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

struct edge{
    ll w, d;
};

vector<vector<edge>> g;

int main(){
    ll n, m; cin >> n >> m;
    g.resize(n);

    forn(i, m){
        ll a, b, w; cin >> a >> b >> w;
        
    }
}