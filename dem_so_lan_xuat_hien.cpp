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
            int x = 0;
            cin >> x;
            mp[x]++;
        }
        if(mp[m] > 0)
            cout << mp[m];
        else 
            cout << "-1";
        cout << endl;
    }
    return 0;
}