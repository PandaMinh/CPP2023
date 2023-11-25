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
    string a;
    getline(cin, a);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(tmp != a)
            cout << tmp << " ";
    }
    return 0;
}