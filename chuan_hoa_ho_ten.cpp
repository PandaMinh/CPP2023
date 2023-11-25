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
    int n = 0;
    while(ss >> tmp){
        vt.push_back(tmp);
        n++;
    }
    for(int i = 0; i < n; i++){
        vt[i][0] = toupper(vt[i][0]);
    }
    for(int i = 0; i < vt[n-1].size(); i++){
        vt[n-1][i] = toupper(vt[n-1][i]);
    }
    for(int i = 0; i < n - 1; i++){
        if(i != n - 2)
            cout << vt[i] << " ";
        else    
            cout << vt[i] << ", ";
    }
    cout << vt[n-1];
    return 0;
}