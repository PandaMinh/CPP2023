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
        int n;
        cin >> n;
        int a[105][105] = {};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        int ans = 0;
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            mp[a[0][i]] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mp[a[i][j]] == i)
                    mp[a[i][j]]++;
            }
        }
        for(auto x : mp){
            if(x.second == n)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}