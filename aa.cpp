#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(ll n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum == 18)
        return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0;
    for(ll i = 1000000000; i <= 9999999999; i++){
        if(check(i) == 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}