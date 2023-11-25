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
        ll n;
        cin >> n;
        map <ll, ll> mp;
        for(int i = 0; i < n; i++){
            ll x = 0;
            cin >> x;
            mp[x]++;
        }
        for(int i = 0; i < n; i++){
            if(mp[i] >= 1)
                cout << i << " ";
            else   
                cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}