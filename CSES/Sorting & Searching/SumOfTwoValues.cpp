#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, num;
    int uno = -1, dos;
    cin >> n >> x;
    multiset<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> num;
        pair< int, int> ax = {num , (i + 1)};
        v.insert(ax);
    }
    for(auto par : v){
        auto ele = v.lower_bound({x - par.first, -1});

        if (ele != v.end() && ele->first == (x - par.first) && ele->second != par.second){
            uno = par.second;
            dos = ele->second;
            break;
        }
    }
    
    if (uno != -1){
        if (dos < uno) swap(dos, uno);
            cout << uno << " " << dos << "\n";
    }
    else
        cout << "IMPOSSIBLE" << "\n";
}