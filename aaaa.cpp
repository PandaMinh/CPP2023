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
        int m, n, k;
        cin >> m >> n >> k;
        map <ll, ll> mp1;
        map <ll, ll> mp2;
        map <ll, ll> mp3;
        for(ll i = 0; i < m; i++){
            ll x;
            cin >> x;
            mp1[x]++;
        }
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            mp2[x]++;
        }
        for(ll i = 0; i < k; i++){
            ll x;
            cin >> x;
            mp3[x]++;
        }
        int l = 0;
        for(auto x : mp1){
            if(mp2[x.first] >= 1 && mp3[x.first] >= 1){
                //cout << x.second << " " << mp2[x.first] << " " << mp3[x.first] << endl;
                int minn = ((x.second + mp2[x.first]) - abs(x.second - mp2[x.first])) / 2;
                minn = ((minn + mp3[x.first]) - abs(minn - mp3[x.first])) / 2;
                //cout << minn << endl;
                for(int j = 0; j < minn; j++){
                    cout << x.first << " ";
                }
                //cout << endl;
                l = 1;
            }
        }
        if(l == 0)  
            cout << "-1";
        cout << endl;
    }
    return 0;
}