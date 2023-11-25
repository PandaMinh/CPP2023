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
        int n, p;
        cin >> n >> p;
        int cnt = 0;
        for(int i = p; i <= n; i += p) {
            int res = 0, tmp = i;
            while(tmp % p == 0) {
                res ++;
                tmp /= p;
            }
            cnt += res;
        }
        cout << cnt << endl;
    }
    return 0;
}