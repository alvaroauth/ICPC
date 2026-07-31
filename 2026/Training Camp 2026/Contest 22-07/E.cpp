#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    vector<ll> v(4);
    ll maxi = -1;
 
    for(int i = 0; i < 4; i++){
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
 
    for(int i = 0; i < 4; i++){
        if (v[i] != maxi){
            cout << (maxi - v[i]) << " ";
        }
    }
}