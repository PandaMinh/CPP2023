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
    ll a[100] = {};
    a[0] = 0;
    a[1] = 1;
    for(ll i = 2; i < 100; i++){
        a[i] = a[i-1] + a[i-2];
    }
    while(t--){
        ll n;
        cin >> n;
        int l = 0;
        for(ll i = 0; i < 100; i++){
            if(n == a[i]){
                cout << "YES" << endl;
                l = 1;
                break;
            }
        }
        if(l == 0) cout << "NO" << endl;
    }
    return 0;
}