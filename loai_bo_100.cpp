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
        int cnt = 0;
        while(s.find("100") != -1){
            cnt += 3;
            s.erase(s.find("100"), 3);
        }
        if(cnt != 0) 
            cout << cnt << endl;
        else 
            cout << "" << endl;
    }
    return 0;
}