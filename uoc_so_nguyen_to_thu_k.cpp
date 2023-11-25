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
        int n, k;
        cin >> n >> k;
        int tmp = 0, l = 0;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                tmp++;
                n /= i;
                if(tmp == k){
                    cout << i << endl;
                    l = 1;
                    break;
                }
            }
            if(l == 1) break;
        }
        if(tmp < k) cout << "-1" << endl;
    }
    return 0;
}