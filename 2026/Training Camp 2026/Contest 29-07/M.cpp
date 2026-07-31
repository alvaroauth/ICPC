#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
    FIN;
    int n, m, c;
    cin >> n;
    vector<int> v(3, 0);
    for(int i=0; i<n; i++){
        cin >> m >> c;

        if (m > c) v[0]++;
        else if (m < c) v[1]++;
        else v[2]++;
    }
   
    if (v[0] > v[1]) cout << "Mishka" << "\n";
    else if (v[1] > v[0]) cout << "Chris" << "\n";
    else cout << "Friendship is magic!^^" << "\n";
}
