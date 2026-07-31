#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	
	int n;
	cin >> n;
	vector<int> p(n,-1),reinos(n,-1);
	set<int> princesasSolteras;
	for(int i = 0; i< n; i++){
		int x;
		cin  >> x;
		int pos;
		while(x--) {
			cin >> pos;
			if(p[i] == -1 && reinos[pos-1] == -1){
				reinos[pos - 1] = i+1;
				p[i] = pos;
			} 
		}
		if(p[i] == -1) princesasSolteras.insert(i+1);
	}
	//for(auto p : princesasSolteras) cout << p << " ";
	//cout << " \n";
	//for (int i = 0; i < n; i++) cout << "Principe " << i << " " << reinos[i] << "   ";
	bool ok = false;
	if ((int)princesasSolteras.size() > 0){
		int p = *princesasSolteras.begin();
		for(int i = 0; i<n; i++){
			if(reinos[i] == -1){
				cout << "IMPROVE" << "\n";
				cout << p << " " << i+1 << "\n";
				ok = true;
				break;
			}
		}
	}
	if (!(ok)) cout << "OPTIMAL" << "\n";

  
}
   return 0;
}
