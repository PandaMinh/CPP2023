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
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k, x;
        cin >> k >> x;
        ll m2 = upper_bound(a, a+n, x) - a;
        ll m1 = lower_bound(a, a+n, x) - a;
        for(int i = k / 2; i > 0; i--){
            cout << a[m1 - i] << " ";
        }
        for(int i = 0; i < k / 2; i++){
            cout << a[m2 + i] << " ";
        }
        cout << endl;
    }
    return 0;
}
