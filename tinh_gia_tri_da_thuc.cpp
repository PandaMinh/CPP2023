#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
// by sunmin

ll solve(ll x, ll i){
    if(i == 0)
        return 1;
    else if(i == 1)
        return x;
    else if(i % 2 == 0)
        return solve(x * x % e, i / 2) % e;
    else    
        return x * solve(x * x % e, i / 2) % e;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll a[2005] = {};
        ll ans = 0;
        for(ll i = n - 1; i >= 0; i--){
            cin >> a[i];
        }
        if(n == 0){
            cout << "0" << endl;
            continue;
        }
        for(ll i = n - 1; i >= 0; i--){
            ans = ans + a[i] * solve(x, i) % e;
            ans %= e;
        }
        cout << ans << endl;
    }
    return 0;
}