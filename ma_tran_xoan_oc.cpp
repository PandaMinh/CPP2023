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
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int dong = n, cot = m, k = 0, p = 0;
        int b[10005] = {};
        while(k < n * m){
            for(int i = p; i < cot; i++)
                b[k++] = a[p][i];
            for(int i = p + 1; i < dong; i++)
                b[k++] = a[i][cot - 1];
            for(int i = cot - 2; i >= p; i--)
                b[k++] = a[dong - 1][i];
            for(int i = dong - 2; i > p; i--)
                b[k++] = a[i][p];
            p++;
            dong--;
            cot--;
        }
        for(int i = 0; i < m * n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}