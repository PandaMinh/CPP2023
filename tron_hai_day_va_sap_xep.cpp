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
        map <ll, ll> mp;
        for(ll i = 0; i < n + m; i++){
            ll x = 0;
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp){
            for(ll i = 0; i < x.second; i++)
                cout << x.first << " ";
        }
        cout << endl;                                            
    }
    return 0;
}