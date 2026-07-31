#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
    string t;
    ll cont = 0;
    cin >> t;
    string st2 = "";
    ll contA = 0;
    for(ll i=0; i<(ll)t.length(); i++){
        if (t[i] != 'a') {cont++;
			st2+= t[i];
		}
		else contA++;
    }
    if(cont == 0) {cout << t << "\n"; return 0;}
    if(cont%2!=0){ cout << ":(" << "\n"; return 0;}
    cont = cont/2;
    for(int i = 0; i< cont ;i++){
		if(st2[i] != st2[i+(cont)]){
			cout << ":(" << "\n";
			return 0;
			}
	}
	
	int contA2 = 0;
	for(int i =0; i< (cont)+contA;i++){
		if(t[i] == 'a') contA2++;
		}
	if((contA2 != contA)){ 
		//cout << contA << " " << contA2 << endl;
		cout << ":(" << "\n"; return 0;}
	for(int i = 0; i< contA+cont; i++){
		cout << t[i];
	}
	cout << "\n";
    return 0;
}
