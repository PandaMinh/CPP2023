#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define lmt 1000006
// by sunmin

ll a[lmt + 1] = {};

void sang() {
    a[0] = a[1] = 1;
    for(int i = 2; i <= sqrt(lmt); i++) {
        if(a[i] == 0) {
            for(int j = i*i; j <= lmt; j+=i) {
                a[j] = 1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    sang();
    while(t--){
        ll l, r;
        cin >> l >> r;
        ll x = sqrt(l);
        ll y = sqrt(r);
        ll cnt = 0;
        for(ll i = x; i <= y; i++) {
            if(!a[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}