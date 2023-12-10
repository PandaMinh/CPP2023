#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll a[1000] = {};

int nto(ll x){
    if(x < 2)
        return 0;
    if(x < 4)
        return 1;
    if(x % 2 == 0 || x % 3 == 0)
        return 0;
    for(int i = 5; i <= sqrt(x); i += 6){
        if(x % i == 0 || x % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    int m = 0;
    for(int i = 2; i < 1e18; i++){
        if(nto(i) == 1)
            a[m++] = i;
    }
    for(int t = 1; t < T; i++){
        int n;
        cin >> n;
        cout << "Test " << t << ":" << endl;
        ll b[n][n] = {};
        int c1 = 0, c2 = n - 1;
        int h1 = 0, h2 = n - 1;
        int res = 0;
        while(h1 <= h2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                b[h1][i] = a[res++];
            }
            h1++;
            for(int i = h1; i <= h2; i++){
                b[i][c2] = a[res++];
            }
            c2--;
            if(h1 <= h2){
                for(int i = c2; i >= c1; i--){
                    b[h2][i] = a[res++];
                }
                h2--;
            }
            if(c1 <= c2){
                for(int i = h2; i >= h1; i--){
                    b[i][c1] = a[res++];
                }
                c1++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << b[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}