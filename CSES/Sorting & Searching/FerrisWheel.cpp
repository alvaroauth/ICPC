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
    ll n, x; 
    cin >> n >> x;
 
    vector<ll> v(n);
    forn(i, n){
        cin >> v[i];
    }
 
    sort(all(v));
 
    ll cont = 0;
    ll l = 0, r = n-1;
 
    while(l <= r){
        if ((v[l] + v[r]) <= x){
            l++;
        }
        r--;
        cont++;
    }
    cout << cont << "\n";
}
 
/*
    FIN;
    ll n, x; 
    cin >> n >> x;
 
    vector<ll> v(n);
    forn(i, n){
        cin >> v[i];
    }
 
    sort(all(v));
 
    ll cont = 0;
    ll l = 0, r = n-1;
 
    while(l < r){
        if ((v[l] + v[r]) <= x){
            l++;
        }
        r--;
        if (l == r)
            cont++;
        cont++;
    }
    cout << cont << "\n";
*/