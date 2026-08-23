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
    ll n, x; cin >> n >> x;
    vector<pair<ll, ll>> v(n);
    ll aux;
    ll uno, dos, tres;
    bool pude = false;
    forn(i, n) cin >> aux, v[i] = {aux, i+1};
    sort(all(v));


    forn(a, n){
        forr(b, a+1, n){
            ll busc = x - (v[a].first + v[b].first);
            ll l = a, r = b;
            while (l < r-1){
                ll med = (l+r)/2;
                if (v[med].first >= busc) r = med;
                else l = med;
            }
            // cout << busc << " " << r << endl;
            if ((v[r].first == busc)and(r != b)){
                uno = v[a].second;
                dos = v[b].second;
                tres = v[r].second;
                pude = true;
                break;
            }
        }
        if (pude) break;
    }
    if (pude) cout << uno << " " << dos << " " << tres;
    else cout << "IMPOSSIBLE";
    cout << "\n";
}