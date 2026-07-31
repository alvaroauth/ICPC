#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (z == 0){
        if (x > y) cout << "+" << "\n";
        else if (y > x) cout << "-" << "\n";
            else cout << 0 << "\n";
    } else {
        if (x > (y+z)) cout << "+" << "\n";
        else if (y > (x+z)) cout << "-" << "\n";
        else cout << "?" << "\n";
    }
    return 0;
}