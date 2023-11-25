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
        int b[1005] = {};
        int ans = 0;
        for(int i = 0; i < n; i++){
            b[i] = 1;
            for(int j = 0; j < i; j++){
                if(a[i] > a[j])
                    b[i] = max(b[i], b[j] + 1);
            }
            ans = max(b[i], ans);
        }
        cout << ans << endl;
    }
    return 0;
}