#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    for(int i = 0; i < k; i++){
        int num; cin >> num;
        int l = 0, r = n-1, med;
        bool encontre = false;

        while ((!encontre)&&(l <= r)){
            med = (l+r)/2;
            if (vec[med] == num) encontre = true;
            else
                if (vec[med] > num) r = med - 1;
                else l = med + 1;
        }

        if (encontre) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}