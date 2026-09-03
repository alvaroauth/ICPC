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
const ll INF = 1e15;
vector<ll> v;

void dfs_sin_poda(ll i, ll sum, ll total, ll n, ll &mini){
    if(i == n) {mini = min(mini,abs(total-2*sum)); return;}
    dfs(i+1,sum,total,n,mini);
    dfs(i+1,sum+v[i],total,n,mini);
}

void dfs(ll i, ll sum, ll total, ll n, ll &mini){
    if(i == n) {mini = min(mini,abs(total-2*sum)); return;}
    if(sum > total-sum and abs(total-2*sum) >= mini) return;
    dfs(i+1,sum,total,n,mini);
    dfs(i+1,sum+v[i],total,n,mini);
}

int main(){
    ll n; cin >> n;
    v.resize(n);

    ll sum = 0;
    forn(i, n) cin >> v[i], sum += v[i];

    ll mitad = sum / 2;
    ll uno = INF;
    dfs(0, 0, sum, n, uno);
    cout << uno << "\n";
}
