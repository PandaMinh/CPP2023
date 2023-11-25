#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int tang(int n){
    int tmp = n % 10;
    n /= 10;
    while(n > 0){
        if(tmp <= n % 10)
            return 0;
        tmp = n % 10;
        n /= 10;
    }
    return 1;
}

int giam(int n){
    int tmp = n % 10;
    n /= 10;
    while(n > 0){
        if(tmp >= n % 10)
            return 0;
        tmp = n % 10;
        n /= 10;
    }
    return 1;
}

int check(int n){
    if(tang(n) == 1 || giam(n) == 1){
        if(n < 2)
            return 0;
        else{
            for(int i = 2; i <= sqrt(n); i++){
                if(n % i == 0)
                    return 0;
            }
        }
        return 1;
    }
    return 0;
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
        int cnt = 0;
        for(int i = pow(10, n - 1); i < pow(10, n) - 1; i++){
            if(check(i))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}