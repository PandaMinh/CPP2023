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
    //cin.ignore();
    while(t--){
        cin.ignore(
        string s;
        cin >> s;
        int l = 0;
        for(int i = 0; i < s.length(); i++){
            int x = 0;
            while(s[i] != '.'){
                x = x * 10 + s[i] - '0';
                i++;
            }
            if(x <= 255 && x >= 0)
                l++;
            i++;
        }
        cout << l << endl;
        if(l == 4)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
    return 0;
}
