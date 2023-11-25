#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(ll n){
    if(n < 2) return 0;
    else{
        for(ll i = 2; i <= sqrt(n); i++){
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        for(ll i = 2; i <= sqrt(n); i++){
            if(check(i))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}