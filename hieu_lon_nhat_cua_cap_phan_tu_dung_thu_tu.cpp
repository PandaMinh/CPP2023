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
        int a[1005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = -1;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[i])
                    ans = max(ans, a[j] - a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}