#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct Point {
    int x, y, z;
    void input() {
        cin >> x >> y >> z;
    }
};

Point Vector(Point A, Point B) {
    Point AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    AB.z = B.z - A.z;
    return AB;
}

Point VoHuong(Point A, Point B) {
    Point AB;
    AB.x =  A.y*B.z - A.z*B.y; 
    AB.y =  A.z*B.x - A.x*B.z; 
    AB.z =  A.x*B.y - A.y*B.x; 
    return AB;
}

void solve() {
    Point A, B, C, D;
    A.input(); B.input(); C.input(), D.input();
    Point AB = Vector(A, B);
    Point AC = Vector(A, C);
    Point AD = Vector(A, D);
    Point ABAC = VoHuong(AB, AC);

    ll s = ABAC.x*AD.x + ABAC.y*AD.y + ABAC.z*AD.z;
    s == 0 ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--)	{
        solve();
    }
    return 0;
}