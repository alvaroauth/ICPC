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
    ll n, aux, cont = 0; cin >> n;

    set<ll> nums;

    forn(i, n){
        cin >> aux;
        auto it = nums.upper_bound(-aux);
        
        if (it != nums.end()){
            nums.erase(it);
        }
        else{
            cont++;
        }
        nums.insert(-aux);
    }
    cout << cont << "\n";
    return 0;
}