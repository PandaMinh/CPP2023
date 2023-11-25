#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

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
        int m = sqrt(n);
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0 && (n / i) % 2 == 0 && i % 2 == 0)
                cnt += 2;
            else if(n % i == 0 && (i % 2 == 0 || (n / i) % 2 == 0))
                cnt++;
        }
        if(m * m == n && m % 2 == 0)
            cnt--;
        cout << cnt << endl;
    }
    return 0;
}