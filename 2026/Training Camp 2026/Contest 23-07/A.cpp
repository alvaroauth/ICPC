#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

void fibo(vector<ll> &f, ll n){
    f.push_back(0);
    f.push_back(1);
    f.push_back(1);
    ll act = 2;
    while (act < n){
        f.push_back(act);
        act = f[f.size() - 1] + f[f.size() - 2];
    }
}

int main(){
    ll n; cin >> n;
    vector<ll> f;
    fibo(f, n);

    if (n == 0) cout << "0 0 0" << endl;
    else if (n == 1) cout << "0 0 1" << endl;
    else if (n == 2) cout << "0 1 1" << endl;
    else if (n == 3) cout << "1 1 1" << endl;
    else{
        cout << f[f.size() - 1] << " " << f[f.size() - 3] << " " << f[f.size() - 4];
    }
}