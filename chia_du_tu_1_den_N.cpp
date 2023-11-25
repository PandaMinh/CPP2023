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
        ll n, k;
        cin >> n >> k;
        cout << ((k - 1) * k / 2) * (n / k) + (n % k) * (n % k + 1) / 2 << endl;
    }
    return 0;
}