#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[105][105] = {};
        int b[105][105] = {};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    for(int k = 0; k < n; k++){
                        b[k][j] = 1;
                    }
                    for(int k = 0; k < m; k++){
                        b[i][k] = 1;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}