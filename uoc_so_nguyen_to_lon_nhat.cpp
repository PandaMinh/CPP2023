#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        for(long long i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                n /= i;
                ans = i;
            }
        }
        if(n > 1) ans = n;
        cout << ans << endl;
    }
    return 0;
}