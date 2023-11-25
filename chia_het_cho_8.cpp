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
        string s; 
        cin >> s;
        ll cnt = 0;
        for(int i = 0; i < s.length(); i++){
            ll num8 = 0;
            ll num3 = 0;
            for(int j = i; j < s.length(); j++){
                num8 = (num8 * 10 + s[j] - '0') % 8;
                num3 = (num3 * 10 + s[j] - '0') % 3;
                if(num8 == 0 && num3 != 0) 
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}