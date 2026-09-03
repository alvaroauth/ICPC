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

vector<char> bin = {'0', '1'};
vector<char> bin2 = {'1', '0'};
set<string> st;

void dfs(string res, int unos, int n){
    if ((unos % 2) == 0){
        for(auto c: bin){
            string aux = res + c;
            if (aux.length() == n) cout << aux << "\n";
            else if (c == '1') dfs(aux,unos+1, n);
            else dfs(aux, unos, n);
        }
    }
    else{
        for(auto c: bin2){
            string aux = res + c;
            if (aux.length() == n) cout << aux << "\n";
            else if (c == '1') dfs(aux,unos+1, n);
            else dfs(aux, unos, n);
        }
    }
}

int main(){
    ll n; cin >> n;
    dfs("", 0, n);

    for(auto s: st) cout << s << "\n";
}