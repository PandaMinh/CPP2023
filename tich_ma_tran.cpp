#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, p;
    cin >> n >> m >> p;
    int a[55][55] = {0}, b[55][55] = {0}, c[55][55] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}