#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll a[1000005] = {};
ll b[1000005] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll ans = a[0];
        b[0] = a[0];
        for(int i = 1; i < n; i++){
            b[i] = max(a[i], a[i] + b[i - 1]);
            ans = max(ans, b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}