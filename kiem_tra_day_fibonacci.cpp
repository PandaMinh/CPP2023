#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int a[92] = {};
void fibo(){
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    fibo();
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            for(int j = 0; j < 92; j++){
                if(x == a[j]){
                    cout << x << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}