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
        int m = 8 * n * n;
        int c[m];
        c[0] = 8 * n * n + 2 * n;
        int tmp = c[0], f = 1, st = 2, pos = 1;
        while(pos < m){
            for(int i = 0; i < st; i++){
                tmp -= 4 * f * n;
                c[pos] = tmp;
                pos++;
                if(pos >= m) break;
            }
            if(pos >= m) break;
            for(int i = 0; i < st; i++){
                tmp += f;
                c[pos] = tmp; pos++;
                if(pos >= m) break;
            }
            f *= -1; 
            st += 2;
        }
        int c2[m];
        for(int i = 0; i < m; i++) c2[i] = 16 * n * n + 1 - c[i];
        for(int i = 0; i < m; i++) cout << c[i] << " ";
        cout << endl;
        for(int i = 0; i < m; i++) cout << c2[i] << " ";
        cout << endl;
    }
    return 0;
}