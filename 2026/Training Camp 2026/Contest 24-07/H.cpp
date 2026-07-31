#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
	FIN;
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    if (n < 4) cout << "NO" << "\n";
    else if (n==4){
        cout << "YES" << "\n";
        cout << 4 << " * " << 3 << " = " << 12 << "\n";
        cout << 12 << " * " << 2 << " = " << 24 << "\n";
        cout << 24 << " * " << 1 << " = " << 24 << "\n";
    }
    else if (n == 5){
        cout << "YES" << "\n";
        cout << 4 << " * " << 5 << " = " << 20 << "\n";
        cout << 3 << " - " << 1 << " = " << 2 << "\n";
        cout << 20 << " + " << 2 << " = " << 22 << "\n";
        cout << 22 << " + " << 2 << " = " << 24 << "\n";
    }
    else {
        cout << "YES" << "\n";
        
        cout << n << " - " << n-1 << " = " << 1 << "\n";
        cout << 1 << " - " << 1 << " = " << 0 << "\n";
        for(ll i=n-2; i>4; i--){
            cout << i << " * " << 0 << " = " << 0 << "\n";
        }
        cout << 4 << " * " << 3 << " = " << 12 << "\n";
        cout << 2 << " * " << 12 << " = " << 24 << "\n";
        cout << 24 << " + " << 0 << " = " << 24 << "\n";
    }
	return 0;
}
