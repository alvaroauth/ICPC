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
        string s; cin >> s;
        bool pm = false;
        int a = s[0] - '0', b = s[1] - '0';
        int num = a*10 + b;
        
        if (num == 0) num = 12;
        else if (num >= 12) pm = true;

        if (num > 12) num -= 12;

        if (num < 10) cout << 0;
        cout << num << ':' << s[3] << s[4];

        if (pm) cout << " PM";
        else cout << " AM";
        cout << "\n";
    }
}