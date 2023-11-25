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
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int ans = 0;
        for(int i = m; i <= n; i++){
            if(i % a == 0 || i % b == 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}