#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        double Xa, Ya, Xb, Yb;
        cin >> Xa >> Ya >> Xb >> Yb;
        cout << fixed << setprecision(4) << sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb)) << endl;
    }
    return 0;
}