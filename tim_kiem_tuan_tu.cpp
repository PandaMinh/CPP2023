#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int a[1000005] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int l = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == x && l != 1){
                l = 1;
                ans = i + 1;
            }
        }
        if(l == 0) cout << "-1";
        else cout << ans;
        cout << endl;
    }
    return 0;
}