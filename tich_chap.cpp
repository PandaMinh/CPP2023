#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

void nhap(int a[301][301], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
}

pair <int, int> p[8] = {{0, 0}, {0, 1}, {0, 2}, {1, 2}, {2, 2}, {2, 1}, {2, 0}, {1, 0}};
pair <int, int> pa[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

int TICH(int a[301][301], int k[301][301], int i, int j) {
    int sum = k[1][1] * a[i][j];
    for(int x = 0; x < 8; x++) {
        sum += k[p[x].first][p[x].second] * a[i + pa[x].first][j + pa[x].second];
    }
    return sum;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        int a[301][301];
        nhap(a, n, m);
        int k[301][301];
        nhap(k, 3, 3);
        ll sum = 0;
        for(int i = 1; i < n - 1; i++) {
            for(int j = 1; j < m - 1; j++) {
                int tmp = TICH(a, k, i, j);
                sum += tmp;
            }
        }
        cout << sum << endl;
    }
    return 0;
}