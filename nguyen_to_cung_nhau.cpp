#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int ucln(int a, int b){
    if(b == 0) return a;
    else return ucln(b, a % b);
}

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
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(ucln(i, n) == 1)
                ans++;
        }
        if(check(ans)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}