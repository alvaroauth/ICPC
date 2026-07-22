#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    string s; cin >> s;

    set<char> vocal = {'a', 'e', 'i', 'o', 'u', '1', '3', '5', '7','9'};

    ll cont = 0;
    for(char c : s){
        if (vocal.find(c) != vocal.end()) cont++;
    }
    cout << cont << "\n";
}