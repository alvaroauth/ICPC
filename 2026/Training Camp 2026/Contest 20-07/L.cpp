#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    FIN;
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    map<ld, ll> mp;

    forn(i, n){
        cin >> a[i];
    }

    forn(i, n){
        cin >> b[i];
    }

    ll suma = 0;
    forn(i, n){
        //cout << "A: " << a[i] << "   " << "B: " << b[i] << endl;
        if ((a[i] == 0)&&(b[i] == 0)) suma++;
        else if ((a[i] != 0)){
            ld d = (ld)-((ld)b[i]/(ld)a[i]);
            //cout << "D: " << d << "\n";
            mp[d]++;
        }
    }

    ll maxi = 0;
    for(auto cant : mp){
        maxi = max(maxi, cant.second);
    }

    cout << (maxi+suma) << "\n";
}