#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){
	ll n; cin >> n;
	vector<bool> v(1e6+5, false);

    ll act = 0, maxi = 0;
	while (n--){
	    char sig; ll num;
	    cin >> sig >> num;
	    
	    if (sig == '-'){
	        if (v[num] == false)
	            maxi++;
	        else{
	            act--;
	            v[num] = false;
	        }
	    }
	    else{
	        act++;
	        v[num] = true;
	    }
	    maxi = max(maxi, act);
	}
	cout << maxi << "\n";
}
