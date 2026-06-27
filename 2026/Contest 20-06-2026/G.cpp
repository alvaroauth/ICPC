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
    int t;
    cin >> t;
    while (t--){
        int a, num;
        multiset<int> ms;
        cin >> a;
        forn(i, a){
            cin >> num;
            ms.insert(num);
        }
        auto it = ms.begin();
        ll total = *it + 1;
        it++;
        while (it != ms.end()){
            total *= *it;
            it++;
        }
        cout << total << "\n";
    }
    return 0;
}