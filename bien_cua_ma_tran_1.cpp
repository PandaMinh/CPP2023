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
        int n;
        cin >> n;
        int a[105][105] = {};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            if(i == 0 || i == n - 1){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] << " ";
                }
            }
            else{
                cout << a[i][0] << " ";
                for(int j = 1; j < n - 1; j++){
                    cout << " " << " ";
                }
                cout << a[i][n - 1];
            }
            cout << endl;
        }
    }
    return 0;
}