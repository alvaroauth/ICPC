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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string st;

        forn(i, 2*n){
            forn(j, 2*n){
                if (((i/2) % 2) == 0){
                    if (((j/2) % 2) == 0){
                        cout << '#';
                    }
                    else cout << '.';
                }
                else{
                    if (((j/2) % 2) == 0){
                        cout << '.';
                    }
                    else cout << '#';
                }
            }
            cout << "\n";
        }
    }
}