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
        char s[25] = {};
        cin >> s;
        if(s[strlen(s) - 1] == '6' && s[strlen(s) - 2] == '8')
            cout << "1" << endl;
        else 
            cout << "0" << endl;
    }
    return 0;
}