#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[100005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 1e9;
        sort(a, a+n, cmp);
        for(int i = 0; i < n - 1; i++){
            ans = min(ans, abs(a[i] - a[i+1]));
        }
        cout << ans << endl;
    }
    return 0;
}