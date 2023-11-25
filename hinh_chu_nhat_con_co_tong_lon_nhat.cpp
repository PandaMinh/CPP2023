#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int kadane(int a[], int n) {
    int res = 0, tmp = 0;
    for(int i = 0; i < n; i++) {
        tmp += a[i];
        res = max(res, tmp);
        tmp = max(0, tmp);
    }
    return res;
}

void solve() {
    int n, m; cin >> n >> m;
    int a[n][m] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int tmp[n];
    int res = INT_MIN;
    for(int l = 0; l < m; l++) {
        memset(tmp, 0, sizeof(tmp));
        for(int r = l; r < m; r++) {
            for(int i = 0; i < n; i++) {
                tmp[i] += a[i][r];
            }
            res = max(res, kadane(tmp, n));
        }
    }
    cout << res << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        solve();
    }
    return 0;
}