#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(ll n){
    if(n < 2)
        return 0;
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
    ll n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}