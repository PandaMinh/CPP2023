#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll sum = 0;

ll Sum(string s){
    if(s.length() >= 10) return 0;
    for(int i = 0; i < s.length(); i++){
        if(s[0] == '-') continue;
        if(s[i] < '0' || s[i] > '9') return 0;
    }
    ll res = 0;
    res += stoi(s);
    return res;
}

int main(){
    ifstream file;
    file.open("DATA.in");
    string s;
    while(file >> s){
        sum += Sum(s);
    }
    cout << sum << endl;
    return 0;
}