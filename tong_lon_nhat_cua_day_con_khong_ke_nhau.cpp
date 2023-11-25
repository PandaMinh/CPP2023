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
        ll a[100005] = {};
        ll b[100005] = {};
        for(int i = 3; i < n + 3; i++){
            cin >> a[i];
        }
        ll ans = 0;
        for(int i = 3; i < n + 3; i++){
            b[i] = max(b[i - 2], b[i - 3]);
            b[i] += a[i];
            ans = max(ans, b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}