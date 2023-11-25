#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct Point{
    double x, y;
};

void input(Point &A){
    cin >> A.x >> A.y;
}

double distance(Point A, Point B){
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct Point A, B;
    int t;
    cin >> t;
    while(t--){
        input(A); 
        input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}