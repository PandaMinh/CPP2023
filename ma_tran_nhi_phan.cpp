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
    int a[1005][4] = {};
    int chan = 0, le = 0, ans = 0;
    for(int i = 0; i < n; i++){
        chan = 0; 
        le = 0;
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            if(a[i][j] == 1)
                le++;
            else  
                chan++;
        }
        if(le > chan) 
            ans++;
    }
    cout << ans;
    return 0;
}