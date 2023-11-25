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
        cout << "1" << " " << "2" << " " << "3" << " ";
        for(int i = 4; i <= n; i++){
            int l = 0;
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    cout << j << " ";
                    l = 1;
                    break;
                }
            }
            if(l == 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}