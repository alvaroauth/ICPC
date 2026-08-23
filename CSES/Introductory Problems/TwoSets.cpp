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
    cout << gauss << endl;  
    if (n == 1 || (gauss % 2) != 0) cout << "NO\n";
    else{
        cout << "YES\n";
        ll pri = 1, ult = n;
        set<ll> uno, dos;

        while (ult > pri + 1){
            uno.insert(pri++); uno.insert(ult--);
            dos.insert(pri++); dos.insert(ult--);
        }

        cout << uno.size() << "\n";
        for(auto e: uno) cout << e << " ";
        cout << "\n" << dos.size() << "\n";
        for(auto e: dos) cout << e << " ";
    }
}