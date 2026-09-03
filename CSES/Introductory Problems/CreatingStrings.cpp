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

set<string> st;

void dfs(string res, string s, vector<bool> us, int n){
    forn(i, n){
        char c = s[i];
        if (!us[i]){
            us[i] = true;
            string aux = res + c;
            dfs(res+c, s, us, n);
            us[i] = false;
        }
        else if (res.length() == n) st.insert(res);
    }
}

int main(){
    string s; cin >> s;
    vector<bool> usado(s.length(), false);
    dfs("", s, usado, s.length());
    cout << st.size() << "\n";
    for(auto s: st) cout << s << "\n";
}