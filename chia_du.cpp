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
    while(t--){
        ll a, m;
        cin >> a >> m;
        int l = 0;
        for(ll i = 0; i < m; i++){
            if((a * i) % m == 1){
                cout << i << endl;
                l = 1;
                break;
            }
        }
        if(l == 0) cout << "-1" << endl;
    }
    return 0;
}