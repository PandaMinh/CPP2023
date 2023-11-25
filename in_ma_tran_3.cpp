#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

void in(int arr[][101], int n, int m){
    int row = 0, col = 0;
    bool row_inc = 0;
    int mn = min(m, n);
    for (int len = 1; len <= mn; ++len) {
        for (int i = 0; i < len; ++i) {
            cout << arr[row][col] << " ";
 
            if (i + 1 == len)
                break;
            if (row_inc)
                ++row, --col;
            else
                --row, ++col;
        }
 
        if (len == mn)
            break;
        if (row_inc)
            ++row, row_inc = false;
        else
            ++col, row_inc = true;
    }
    if (row == 0) {
        if (col == m - 1)
            ++row;
        else
            ++col;
        row_inc = 1;
    }
    else {
        if (row == n - 1)
            ++col;
        else
            ++row;
        row_inc = 0;
    }
    int MAX = max(m, n) - 1;
    for (int len, diag = MAX; diag > 0; --diag) {
 
        if (diag > mn)
            len = mn;
        else
            len = diag;
 
        for (int i = 0; i < len; ++i) {
            cout << arr[row][col] << " ";
 
            if (i + 1 == len)
                break;
            if (row_inc)
                ++row, --col;
            else
                ++col, --row;
        }
        if (row == 0 || col == m - 1) {
            if (col == m - 1)
                ++row;
            else
                ++col;
 
            row_inc = true;
        }
 
        else if (col == 0 || row == n - 1) {
            if (row == n - 1)
                ++col;
            else
                ++row;
 
            row_inc = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][101];
		for(int i = 0; i <n ;i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		in(a, n, m);
		cout << endl;
	}
    return 0;
}