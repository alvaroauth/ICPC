#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n+2); 

    v[0] = -2e9;
    v[n+1] = 2e9;
    forn(i, n) cin >> v[i+1];

    forn(i, k){
        ll num, l = 0, r = n + 1, med;
        cin >> num;

        while (l != (r - 1)){
            med = (l + r)/2;
            if (v[med] >= num) r = med;
            else l = med;
            // cout << "Medio: " << med << "   v[med]: " << v[med] << "\n"; 
            // cout << "L: " << (l+1) << "   R: " << (r+1) << "\n";
        }
        cout << r << "\n";
    }
    return 0;
}