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
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll tmp = bcnn(x, y);
        tmp = bcnn(tmp, z);
        int l = 0;
        ll max = pow(10, n) - 1, min = pow(10, n - 1);
        for(ll i = min / tmp; i <= max / tmp; i++){
            if(i * tmp >= min && i * tmp <= max){
                cout << i * tmp << endl;
                l = 1;
                break;
            }
        }
        if(l == 0) 
            cout << "-1" << endl;
    }
    return 0;
}