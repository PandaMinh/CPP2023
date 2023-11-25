#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(int n){
    if(n < 2) return 0;
    else{
        for(int i = 2; i <= sqrt(n); i++){
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
        int n;
        cin >> n;
        int l = 0;
        for(int i = 2; i <= n / 2; i++){
            if(check(i) == 1 && check(n - i) == 1){
                cout << i << " " << n - i << endl;
                l = 1;
                break;
            }
        }
        if(l == 0) cout << "-1" << endl;
    }
    return 0;
}