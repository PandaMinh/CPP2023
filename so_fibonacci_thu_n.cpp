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
    ll a[95] = {};
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}