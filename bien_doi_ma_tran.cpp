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
        int a[105][105] = {};
        int hang[105] = {}, cot[105] = {};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                hang[i] += a[i][j];
                cot[j] += a[i][j];
            }
        }
        int smax = max(*max_element(hang, hang + n), *max_element(cot, cot + n));
        int ans = 0;
        int i = 0, j = 0;
        while(i < n && j < n){
            int tmp = min(smax - hang[i], smax - cot[j]);
            hang[i] += tmp;
            cot[j] += tmp;
            ans += tmp;
            if(hang[i] == smax)
                i++;
            if(cot[j] == smax)
                j++;
        }
        cout << ans << endl;
    }
    return 0;
}