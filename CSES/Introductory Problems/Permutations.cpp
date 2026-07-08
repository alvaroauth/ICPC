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

    if ((n < 4)&&(n!=1)) cout << "NO SOLUTION\n";
    else{
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for(int i = 1; i <= n; i += 2)
            cout << i << " ";
        cout << "\n";
    }
}