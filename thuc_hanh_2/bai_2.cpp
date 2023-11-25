#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(ll n){
    int a[15] = {};
    int k = 0;
    while(n != 0){
        a[k++] = n % 10;
        n /= 10;
    }
    for(int i = 0; i <= k / 2; i++){
        if(a[i] != a[k - 1 - i])
            return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int n;
    // cin >> n;
    ll sum = 0;
    for(ll i = 1000000000; i <= 9999999999; i++){
        if(check(i))
            sum += i;
    }
    cout << sum;
    return 0;
}
// n = 1--> 45
// n = 2 --> 495
// n = 3 --> 49500
//n = 4 --> 495000
//n = 5 --> 49500000
// n = 6 --> 495000000
// n = 7 --> 49500000000
// n = 8 -- > 495000000000
// n = 9 --> 49500000000000
// n = 10