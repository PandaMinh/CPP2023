#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
// by sunmin

ll Mul(ll a, ll b){
    if(b == 0) 
        return 1;
    if(b % 2 == 0)
        return Mul(a * a % e, b/2) % e;
    else
        return a * Mul(a * a % e,  b / 2) % e;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        ll a[n] = {};
        for(auto &x : a) 
            cin >> x;
        ll u = 0;
        for(int i = 0; i < n; i++){
            u = __gcd(u, a[i]);
        }
        ll res = 1;
        for(int i = 0; i < n; i++){
            res *= Mul(a[i], u);
            res %= e;
        } 
        cout << res << endl;
    }
    return 0;
}