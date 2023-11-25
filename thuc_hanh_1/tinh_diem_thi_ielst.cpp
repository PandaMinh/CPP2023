#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

double score(double n){
    double s = 0;
    if(n >= 39 && n <= 40)
        s = 9.0;
    else if(n >= 37 && n <= 38)
        s =  8.5;
    else if(n >= 35 && n <= 36)
        s =  8.0;
    else if(n >= 33 && n <= 34)
        s =  7.5;
    else if(n >= 30 && n <= 32)
        s =  7.0;
    else if(n >= 27 && n <= 29)
        s =  6.5;
    else if(n >= 23 && n <= 26)
        s =  6.0;
    else if(n >= 20 && n <= 22)
        s =  5.5;
    else if(n >= 16 && n <= 19)
        s =  5.0;
    else if(n >= 13 && n <= 15)
        s =  4.5;
    else if(n >= 10 && n <= 12)
        s =  4.0;
    else if(n >= 7 && n <= 9)
        s =  3.5;
    else if(n >= 5 && n <= 6)
        s =  3.0;
    else if(n >= 3 && n <= 4)
        s =  2.5;
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        a = score(a);
        b = score(b);
        double ans = 0;
        ans = (a + b + c + d) / 4;
        int m = int(ans);
        double le = ans - m;
        if(le >= 0 && le < 0.25)
            cout << m << ".0";
        else if(le >= 0.25 && le < 0.75)
            cout << m << ".5";
        else if(le >= 0.75 && le < 1)
            cout << m + 1 << ".0";
        cout << endl;
    }
    return 0;
}