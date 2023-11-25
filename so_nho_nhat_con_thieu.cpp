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
        map <int, int> mp;
        for(int i = 0; i < n - 1; i++){
            int x = 0;
            cin >> x;
            mp[x]++;
        }
        for(int i = 1; i <= n; i++){
            if(mp[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}