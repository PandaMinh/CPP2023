#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool checkDigit(string token){
    for(int i = 0; i < token.length(); i++){
        if(!isdigit(token[i]))
            return false;
    }
    return true;
}

void solve(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    int cnt = 0;
    while(getline(ss, token, '.')){
        if(!checkDigit(token) or (stoi(token) > 255 or stoi(token) < 0)){
            cout << "NO" << endl;
            return;
        }
        cnt++;
    }
    if(!isdigit(s.back()) or cnt != 4)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}