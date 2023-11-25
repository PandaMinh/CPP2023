#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, m;
char a[101][101];

pair <int, int> pa[4] = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};

void dfs(int i, int j) {
    a[i][j] = '*';
    for(int k = 0; k < 4; k++) {
        int i1 = i + pa[k].first;
        int j1 = j + pa[k].second;
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O') {
            dfs(i1, j1);
        }
    }
}

void in() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] != '*') cout << 'X' << " ";
            else cout << 'O' << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    if(a[i][j] == 'O') {
                        dfs(i, j);
                    }
                }
            }
        }
        in();
    }
    return 0;
}