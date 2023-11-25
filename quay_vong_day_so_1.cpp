#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int a[1000005] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = k; i < n; i++){
            cout << a[i] << " ";
        }
        for(int i = 0; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}