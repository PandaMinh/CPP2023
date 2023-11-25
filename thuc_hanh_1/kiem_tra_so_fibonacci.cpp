#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a[95] = {};
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for(ll i = 3; i < 96; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int l = 0;
        for(int i = 0; i < 96; i++){
            if(n == a[i]){
                cout << "YES" << endl;
                l = 1;
                break;
            }
        }
        if(l == 0)
            cout << "NO" << endl;
    }
    return 0;
}