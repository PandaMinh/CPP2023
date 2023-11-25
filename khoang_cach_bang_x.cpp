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
        int n, x;
        cin >> n >> x;
        map <int, int> mp;
        int a[100005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = 1;
        }
        int l = -1;
        for(int i = 0; i < n; i++){
            if(mp[x + a[i]] == 1){
                l = 1;
                break;
            }
        }
        cout << l << endl;
    }
    return 0;
}