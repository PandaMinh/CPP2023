#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ifstream file;
    file.open("VANBAN.in");
    string s;
    set <string> st;
    while(file >> s){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        st.insert(s);
    }
    for(auto x : st){
        cout << x << endl;
    }
    return 0;
}