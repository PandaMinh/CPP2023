#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(int a, int b){
    return a < b;
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
        int a[1005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n / 2; i++){
            cout << a[n - i - 1] << " " << a[i] << " ";
        }
        if(n % 2 != 0) cout << a[n / 2];
        cout << endl;
    }
    return 0;
}