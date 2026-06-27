#include <bits/stdc++.h>

using namespace std;

const int LOG = 20;
const int NEUT = 1e9 + 7;

struct SparseTable{
    vector<vector<int>> st;

    int op(int x, int y){
        return min(x, y);
    }

    SparseTable(vector<int> v, int n){
        st.resize(LOG);
        for(int i = 0; i < LOG; i++){
            st[i].resize(n);
        }
        st[0] = v;
        for (int i = 1; i < LOG; i++){
            for (int j = 0; j < n; j++){
                if ((j + (1<<i)) <= n){
                    st[i][j] = op(st[i-1][j], st[i-1][j + (1<<(i-1))]);
                }
            }
        }
    }

    int solve(int l, int r){
        int ans = NEUT;
        int curPos = l;
        for(int i = LOG-1; i >= 0; i--){
            if ((curPos-1 + (1<<i)) <= r){
                ans = op(ans, st[i][curPos]);
                curPos += (1<<i);
            }
        }
        return ans;
    }
};

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];

    SparseTable st(v, n);

    while (q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << st.solve(l, r) << "\n";
    }

    return 0;
}