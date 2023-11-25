#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(char a, char b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(char x : s){
            if(x == '4')
                ans += "322";
            else if(x == '6')
                ans += "35";
            else if(x == '8')
                ans += "2227";
            else if(x == '9')
                ans += "3327";
            else if(x != '1' && x != '0')
                ans += x;
        }
        sort(ans.begin(), ans.end(), cmp);
        cout << ans << endl;
    }
    return 0;
}