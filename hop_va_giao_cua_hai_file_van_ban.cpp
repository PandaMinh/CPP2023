#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    set <string> st1, st2;
    string s;
    ifstream file1;
    file1.open("DATA1.in");
    while(file1 >> s) {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       st1.insert(s);
    }
    file1.close();

    ifstream file2;
    file2.open("DATA2.in");
    while(file2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);    
        st2.insert(s);
    }
    file2.close();

    map <string, int> mp;
    for(auto x : st1) mp[x]++;
    for(auto x : st2) mp[x]++;

    for(auto x : mp) {
        cout << x.first << " ";
    }
    cout << endl;

    for(auto x : mp) {
        if(x.second > 1) {
            cout << x.first << " ";
        } 
    }
    return 0;
}