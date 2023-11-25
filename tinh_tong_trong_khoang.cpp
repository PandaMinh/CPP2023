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
        int n, q;
        cin >> n >> q;
        int a[10005] = {};
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int l, r;
        for(int i = 0; i < q; i++){
            cin >> l >> r;
            int sum = 0;
            for(int j = l; j <= r; j++){
                sum += a[j];
            }
            cout << sum << endl;
        }
    }
    return 0;
}