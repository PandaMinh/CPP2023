#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(string s){
    int n = s.length();
    for(int i = 0; i <= n / 2; i++){
        if((s[i] - '0') % 2 != 0 || s[i] != s[n - i - 1])
            return 0;
    }
    return 1;
}

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
        if(check(s)) 
            cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}