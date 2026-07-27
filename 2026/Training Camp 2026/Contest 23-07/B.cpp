#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
		
	int cont = 0; bool inf = false;
	for(int i = 1; i < n; i++){
		if (v[i] == 1){
			if (v[i-1] == 2)
				cont += 3;
			else if (v[i-1] == 3)
				cont += 4;
		}
		else if (v[i] == 2){
			if (v[i-1] == 1)
				cont += 3;
			else if (v[i-1] == 3){
				inf = true;
				break;
			}
		}
		else if (v[i] == 3){
			if (v[i-1] == 1)
				cont += 4;
			else if (v[i-1] == 2){
				inf = true;
				break;
			}
		}
		if ((i > 1) && ((v[i] == 2) && (v[i-1] == 1) && (v[i-2] == 3)))
		    cont--;
	}
	if (inf) cout << "Infinite" << "\n";
	else cout << "Finite" << "\n" << cont << "\n";
	return 0;
}