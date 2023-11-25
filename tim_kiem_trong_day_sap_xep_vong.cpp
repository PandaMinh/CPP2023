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
        int n, X;
        cin >> n >> X;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x = 0;
            cin >> x;
            if(x == X)
                ans = i + 1;
        }
        cout << ans << endl;
    }
    return 0;
}