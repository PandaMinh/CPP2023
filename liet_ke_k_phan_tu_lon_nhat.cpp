#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[1005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}