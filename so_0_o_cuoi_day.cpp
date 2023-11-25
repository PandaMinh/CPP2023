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
        ll n;
        cin >> n;
        vector <ll> a;
        vector <ll> b;
        for(int i = 0; i < n; i++){
            ll x = 0;
            cin >> x;
            if(x == 0)
                b.push_back(x);
            else
                a.push_back(x);
        }
        for(auto x : a)
            cout << x << " ";
        for(auto x : b)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}