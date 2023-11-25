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
        ll x, y, p;
        cin >> x >> y >> p;
        ll ans = 1;
        for(int i = 0; i < y; i++){
            ans = (ans * x) % p;
        }
        cout << ans << endl;
    }
    return 0;
}