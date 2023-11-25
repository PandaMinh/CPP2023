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
        ll n, m;
        cin >> n >> m;
        ll max = -1e10;
        ll a[1005] = {};
        ll pos = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > max){
                max = a[i];
                pos = i;
            }
        }
        //cout << pos << " " <<  max << endl;
        for(ll i = 0; i < n; i++){
            if(a[i] < 0)
                cout << a[i] << " ";
        }
        int l = 1;
        for(ll i = 0; i < n; i++){
            if(a[i] == max && max >= 0 && l == 1){
                cout << m << " ";
                l = 0;
            }
            if(a[i] >= 0)
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}