#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, m, si, sj, ei, ej;
int a[1001][1001];
int d[1001][1001] = {};

pair <int, int> p[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void bfs(int si, int sj) {
    queue <pair<int, int>> q;
    q.push({si, sj});
    a[si][sj] = 0;
    while(!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();
        // duyet cac dinh ke
        for(int i = 0; i < 4; i++) {
            int ix1 = v.first + p[i].first;
            int iy1 = v.second + p[i].second;
            if(ix1 >= 0 && ix1 < n && iy1 >= 0 && iy1 < m && a[ix1][iy1]) {
                d[ix1][iy1] = d[v.first][v.second] + 1;
                if(ix1 == ei && iy1 == ej) return;
                q.push({ix1, iy1});
                a[ix1][iy1] = 0; 
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        cin >> n >> m >> si >> sj >> ei >> ej;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        if(a[si][sj] && a[ei][ej]) {
            bfs(si, sj);
        }
        if(d[ei][ej]) cout << d[ei][ej] << endl;
        else cout << "-1" << endl;
    }
    return 0;
}