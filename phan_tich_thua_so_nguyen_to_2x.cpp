#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int tmp = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                tmp++;
                n = n / i;
            }
            cout << i << " " << tmp << endl;
        }
        tmp = 0;
    }
    if(n > 1) cout << n << " " << "1";
    return 0;
}