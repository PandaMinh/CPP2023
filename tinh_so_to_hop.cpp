#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll P = 1e9 + 7;
// by sunmin

ll a[1001][1001] = {};

ll C(ll k, ll n){
    if(n == k) return 1;
    if(a[k][n] != 0) return a[k][n];
    if(k == 0) a[k][n] = 1;
    else if(k == 1) a[k][n] = n;
    else
        a[k][n] = C(k - 1, n - 1) + C(k, n - 1);
    a[k][n] %= P;
    return a[k][n];
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, k; 
        cin >> n >> k;
        cout << C(k, n) << endl;
    }
    return 0;
}