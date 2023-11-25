#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct Point {
    int x, y;
    void input() {
        cin >> x >> y;
    }
};

db area(Point A, Point B) {
    return A.x *B.y - A.y * B.x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        Point ds[1005];
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            ds[i].input();
        }
        ds[n] = ds[0];
        db res = 0;
        for(int i = 0; i < n; i++) {
            res += area(ds[i], ds[i + 1]);
        }
        res = 0.5 * abs(res);
        cout << fixed << setprecision(3) << res << endl; 
    }
    return 0;
}