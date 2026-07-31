#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;

// MONO TE QUIERO
int main() {
    FIN;
    int n;
    ll h;
    cin >> n >> h;
    cout << fixed << setprecision(10);
    for(int i=0; i<n-1; i++){
        ld area = ((ld)(i+1)*h)/(2.0*n);
        // cerr << "AREA: " << area << endl;
        ld l=0, r=h;
        for(int j=0; j<100; j++){
            ld hp = (l+r)/2;
            ld lp = hp/h;
            ld auxArea = (lp * hp) / 2;
            
            if (auxArea > area) r = hp;
            else l = hp;
            // if(j == 99) cerr << lp << " " << hp << endl;
        }
        cout << r << " ";
    }

    cout << "\n";
    return 0;
}
