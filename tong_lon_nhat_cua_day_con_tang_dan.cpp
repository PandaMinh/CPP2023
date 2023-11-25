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
    while(t--)	{
        int n; cin >> n;
        ll a[n + 1] = {};
        ll b[n + 1] = {};
        ll res = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] += a[i];
            ll tmp = 0;
            for(int j = i - 1; j >= 0; j--) {
                if(a[i] > a[j]) {
                    tmp = max(tmp, b[j]);
                }
            }
            b[i] += tmp;
            res = max(b[i], res);
        }
        cout << res << endl;
    }
    return 0;
}