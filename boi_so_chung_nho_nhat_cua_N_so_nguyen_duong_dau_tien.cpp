#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll ucln(ll a, ll b){
    if(b == 0) 
        return a;
    else 
        return ucln(b, a % b);
}

ll bcnn(ll a, ll b){
    return a * b / ucln(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 1;
        for(ll i = 2; i <= n; i++){
            ans = bcnn(ans, i);
        }
        cout << ans << endl;
    }
    return 0;
}