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
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int cnt = 1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == s[i+1])
                cnt++;
            else{
                cout << s[i] << cnt;
                cnt = 1;
            }
        }
        cout << endl;
    }
    return 0;
}