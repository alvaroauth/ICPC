#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    map<char, char> f;
    for(char c = '1'; c <= '9'; c++){
        char ch;
        cin >> ch;
        f[c] = ch;
    }
    string res = "";
    bool empece = false, termine = false;
    forn(i, n){
        if ((s[i] < f[s[i]])&&(termine == false)){
            res += f[s[i]];
            empece = true;
        }
        else if ((empece == true)&&(termine == false)&&(s[i] != f[s[i]])){
            termine = true;
            res += s[i];
        }
        else
            res += s[i];
    }

    cout << res << "\n";
}