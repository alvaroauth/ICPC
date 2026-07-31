#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main(){
	ll n; cin >> n;
	map<char, int> mp;
	
	ll x = 0;
	for(char c = '0'; c <= '9'; c++){
	    mp[c] = x;
	    x++;
	}
	vector<ll> v(10, 0);
	
	string in; cin >> in;
	
	for(char c : in){
		if (c == 'L'){
			ll i = 0;
			while (v[i] != 0) i++;
			v[i] = 1;
		}
		else if (c == 'R'){
			ll i = 9;
			while (v[i] != 0) i--;
			v[i] = 1;
		}
		else{
			ll num = mp[c];
			//cout << num << "n";
			v[num] = 0;
		}
	}
	for(int i = 0; i < 10; i++){
		cout << v[i];
	}
	cout << "\n";
}