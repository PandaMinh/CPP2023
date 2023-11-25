#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll cso(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll uoc(ll n){
    ll s = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            s += cso(i);
            n /= i;
        }
    }
    if(n != 1)
        s += cso(n);
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    //cout << uoc(n) << endl << cso(n) << endl;
    if(uoc(n) == cso(n))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}