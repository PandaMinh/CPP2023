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
        int n, m;
        cin >> n >> m;
        int a[1005] = {};
        int max = -1e9;
        int pos = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(max < a[i]){
                max = a[i];
                pos = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] < 0)
                cout << a[i] << " ";
        }
        int l = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == max && l == 0){
                cout << m << " ";
                l = 1;
            }
            if(a[i] >= 0)
                cout << a[i] << " ";
        }
    }
    return 0;
}