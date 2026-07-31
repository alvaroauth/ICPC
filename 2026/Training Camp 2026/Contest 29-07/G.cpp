#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)


int main(){
    int n;
    char c;
    cin >> n;
    vector<int> v(3,0);
    while(n--){
		cin >> c;
		if(c == 'B') v[0]++;
		else if(c == 'G') v[1]++;
		else  v[2]++;
		//cout << v[0] << " " << v[1] << " " << v[2] << endl;  
	}
	if((v[0] != 0 ) &&(v[1] != 0 ) && (v[2] != 0 ) ){
		cout << "BGR" << "\n";
	}
	else if((v[0] >=2  ) && (v[1] >= 2 ))  cout << "BGR" << "\n";
	else if((v[1] >=2  ) && (v[2] >= 2 ))  cout << "BGR" << "\n";
	else if((v[2] >=2  ) && (v[0] >= 2 ))  cout << "BGR" << "\n";
	else if((v[0] !=0  ) && (v[1] != 0 )){
		  if(v[0] > v[1]) cout <<"GR" << "\n";
		  else if(v[1] > v[0] )cout << "BR" << "\n";
		  else cout << "R" << "\n";
	  }
	else if((v[0] !=0  ) && (v[2] != 0 )) {
		  if(v[0] > v[2]) cout << "GR" << "\n";
		  else if(v[2] > v[0] )cout << "BG" << "\n";
		  else cout << "G" << "\n";	 
	 }
	else if((v[1] !=0  ) && (v[2] != 0 )) {
		  if(v[1] > v[2]) cout <<"BR" << "\n";
		  else if(v[2] > v[1] )cout << "BG" << "\n";
		  else cout << "B" << "\n";
	 }
	else{
		for(int i = 0; i<3 ; i++){
			if(v[i ] != 0){
				if(i == 0) cout << "B" << "\n";
				if(i == 1) cout << "G" << "\n";
				if(i==2) cout << "R" << "\n";
			}
		}
	}
	
}
