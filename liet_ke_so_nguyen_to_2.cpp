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
        int a, b;
        cin >> a >> b;
        int to = max(a, b);
        int nho = min(a, b);
        for(int i = nho; i <= to; i++){
            if(check(i)) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}