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
        int a[n] = {};
        for(auto &x : a) 
            cin >> x;
        int m = 0;
        for(int i = 0; i <= n / 2; i++){
            for(int j = n - 1; j >= n/2; j--){
                if(a[i] <= a[j]){
                    m = max(m, j - i);
                    break;
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}