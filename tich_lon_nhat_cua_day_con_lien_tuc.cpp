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
        ll a[1005] = {};
        for(auto &x : a) cin >> x;
        ll m = a[0];
        for(int i = 1; i < n; i++) {
            ll res = a[i];
            ll tmp = a[i];
            for(int j = i - 1; j >= 0; j--) {
                res *= a[j];
                tmp = max(tmp, res);
            }
            m = max(m, tmp);
        }
        cout << m << endl;
    }
    return 0;
}