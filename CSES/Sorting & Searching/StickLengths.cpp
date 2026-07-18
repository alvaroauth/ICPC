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
    ll n;
    cin >> n;
    vector<ll> vec(n);
    forn(i, n) cin >> vec[i];

    sort(all(vec));

    ll med = vec[n/2];
    ll suma = 0;

    forn(i, n){
        suma += abs(vec[i]-med);
    }

    cout<<suma<<"\n";
}