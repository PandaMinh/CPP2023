#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(string s){
    for(int i = 0; i < s.length() - 1; i++){
        if(abs(s[i] - s[i+1]) != 1)
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
    while(t--){
        cin.ignore();
        string s;
        cin >> s;
        if(check(s))
            cout << "YES" << endl;
        else cout<< "NO" << endl;
    }
    return 0;
}