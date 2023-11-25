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
    while(t--)	{
        int n, m, k; 
        cin >> n >> m >> k;
        int a[n][m] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1;
        int c1 = 0, c2 = m - 1;
        int b[10001] = {}, cnt = 1;
        while(h1 <= h2 && c1 <= c2) {
            for(int i = c1; i <= c2; i++) {
                b[cnt++] = a[h1][i]; 
            }
            h1++;
            for(int i = h1; i <= h2; i++) {
                b[cnt++] = a[i][c2];
            }
            c2--;
            if(h1 <= h2) {
                for(int i = c2; i >= c1; i--) {
                    b[cnt++] = a[h2][i];
                }
                h2--;
            }
            if(c1 <= c2) {
                for(int i = h2; i >= h1; i--) {
                    b[cnt++] = a[i][c1];
                }
                c1++;
            }
        }
        cout << b[k] << endl;
    }
    return 0;
}