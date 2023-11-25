#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

void solve() {
    int n, m; cin >> n >> m;
    int a[n][m] = {};
    int dp[n][m] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    // danh dau hang dau va cot dau
    for(int i = 0; i < m; i++) {
        dp[0][i] = a[0][i];
    }
    for(int i = 0; i < n; i++) {
        dp[i][0] = a[i][0];
    }

    // kiem tra 

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(a[i][j]) 
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
            else {
                dp[i][j] = 0;
            }
        }
    }

    // tim ket qua max;

    int res = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            res = max(res, dp[i][j]);
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