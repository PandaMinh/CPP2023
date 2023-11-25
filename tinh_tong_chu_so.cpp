#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int solve(int n){
    int tmp = 0;
    if(n == 10) return 1;
    else if(n > 9){
        while(n > 0){
            tmp += n % 10;
            n = n / 10;
        }
    }
    else return n;
    return solve(tmp);
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
        int m = solve(n);
        cout << m << endl;
    }
    return 0;
}