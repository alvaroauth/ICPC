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
    ll gauss = ((n*(n+1))/2);
    if (n == 1 || (gauss % 2) != 0) cout << "NO\n";
    else{
        cout << "YES\n";
        ll sum = 0;
        vector<bool> v(n+1, false);
        set<ll> uno, dos;

        for(int i = n; i > 0; i--){
            if (sum + i <= gauss/2){
                uno.insert(i);
                v[i] = true;
                sum += i;
            }
        }
        forr(i, 1, n+1) if (!v[i]) dos.insert(i);
        
        cout << uno.size() << "\n";
        for(auto i: uno) cout << i << " ";
        cout << "\n";
        cout << dos.size() << "\n";
        for(auto i: dos) cout << i << " ";
        cout << "\n";
    }
}