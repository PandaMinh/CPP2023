#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll ucln(ll a, ll b){
    if(b != 0)
        return ucln(b, a % b);
    return a;
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
        ll a, b;
        cin >> a >> b;
        cout << bcnn(a, b) << " " << ucln(a, b) << endl;
    }
    return 0;
}