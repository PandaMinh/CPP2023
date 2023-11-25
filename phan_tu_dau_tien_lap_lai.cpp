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
        int ans = 0;
        int l = 0;
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(l == 0 && mp[x] > 0){
                ans = x;
                l = 1;
            }
            mp[x]++;
        }
        if(l == 0) cout << "-1";
        else cout << ans;
        cout << endl;
    }
    return 0;
}