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
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x] ++;
        }
        int b[m] = {};
        for(int i = 0; i < m; i++) 
            cin >> b[i];
        for(int i = 0; i < m; i++){
            while(mp[b[i]]--){
                cout << b[i] << " ";
            }
            mp.erase(b[i]);
        }
        for(auto x : mp){
            while(x.second--){
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}