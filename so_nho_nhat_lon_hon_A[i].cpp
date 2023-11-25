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
        int a[n], b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; ++i) {
            int p = lower_bound(b, b + n, a[i] + 1) - b;
            if (p == n)
                cout << "_ ";
            else
                cout << b[p] << " ";
        }
        cout << endl;
    }
    return 0;
}