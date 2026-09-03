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
    stack<ll> indices;

    forn(i, n){
        while ((indices.size() > 0) and (v[indices.top()] >= v[i])) indices.pop();

        if (indices.size() == 0) cout << "0 ";
        else cout << (indices.top() + 1) << " ";
        
        indices.push(i);
    }

    cout << "\n";
}