#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){

    ll n, k; cin >> n >> k;

    set<ll> st;
    vector<ll> idx;
    ll aux;
    for(int i = 0; i < n; i++){
        cin >> aux;
        if (st.find(aux) == st.end()){
            st.insert(aux);
            idx.push_back(i+1);
        }
    }
    if (idx.size() >= k){
        cout << "YES" << "\n";
        forn(i, k){
            cout << idx[i] << " ";
        }
        cout << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}