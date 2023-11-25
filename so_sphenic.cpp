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
        int n;
        cin >> n;
        int ans = 0;
        int l = 1;
        for(int i = 2; i <= sqrt(n); i++){
            int cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            if(cnt > 1){
                l = 0;
                break;
            }
            if(cnt == 1)    
                ans++;
        }
        if(n != 1) ans++;
        if(ans != 3 || l == 0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}