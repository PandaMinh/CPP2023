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
        for(ll i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                while(n % i == 0){
                    cout << i << " ";
                    n /= i;
                }
            }
        }
        if(n > 1) cout << n;
        cout << endl;
    }
    return 0;
}