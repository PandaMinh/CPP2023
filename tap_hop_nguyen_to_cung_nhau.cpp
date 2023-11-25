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
        ll n, m;
        cin >> n >> m;
        ll s1, s2;
        ll tong = n * (n + 1) / 2 + m;
        if(tong % 2 == 0){
            s1 = tong / 2;
            s2 = s1 - m;
            if(__gcd(s1, s2) == 1)
                cout << "Yes" << endl;
            else    
                cout << "No" << endl;
        }
        else 
            cout << "No" << endl;
    }
    return 0;
}