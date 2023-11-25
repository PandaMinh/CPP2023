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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, x, y;
        cin >> a >> x >> y;
        ll tmp = ucln(x, y);
        while(tmp--)
            cout << a;
        cout << endl;
    }
    return 0;
}