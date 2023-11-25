#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    vector <string> vt;
    while(ss >> tmp){
        vt.push_back(tmp);
    }
    cout << vt[vt.size() - 1];
    for(int i = 0; i < vt.size() - 1; i++){
        cout << vt[i][0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}