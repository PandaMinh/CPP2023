#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define PI 3.141592653589793238
// by sunmin

struct Point {
    db x, y;
    void nhap() {
        cin >> x >> y;
    }
};

db Tinh_Canh(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool checkTamGiac(db a, db b, db c) {
    return (a + b > c && a + c > b && b + c > a);
}

db Superficies(db a, db b, db c) {
    db s = 1.0 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b))/4;
    db r = (a * b * c)/(4.0 * s);
    return PI * pow(r, 2);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        Point A, B, C;
        A.nhap(); B.nhap(); C.nhap();
        db a, b, c;
        a = Tinh_Canh(B, C);
        b = Tinh_Canh(A, C);
        c = Tinh_Canh(A, B);
        if(checkTamGiac(a, b, c)) {
            cout << fixed << setprecision(3) << Superficies(a, b, c) << endl;
        } else {
            cout << "INVALID" << endl;
        }
    }
    return 0;
}