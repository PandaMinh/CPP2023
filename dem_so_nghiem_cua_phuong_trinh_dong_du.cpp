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
        ll b, p; 
        cin >> b >> p; // 8 6
        ll cnt = 0;
        for(ll i = 1; i <= p; i++){
            if(i*i % p == 1){
                ll c = i + p*(b/p);
                if(c > b){
                    c -= p;
                } 
                cnt += (c - i)/p + 1; 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}