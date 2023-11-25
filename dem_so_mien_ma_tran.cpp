#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, m;
int a[105][105] = {};
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void DFS(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int tmpi = i + dx[k];
        int tmpj = j + dy[k];
        if(tmpi >= 0 && tmpi < n && tmpj >= 0 && tmpj < m && a[tmpi][tmpj] == 1)
            DFS(tmpi, tmpj);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    ans++;
                    DFS(i, j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}