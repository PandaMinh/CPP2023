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
        if(s[i] == 'Y')
            s[i] = 'A';
        else if(s[i] == 'Z')
            s[i] = 'B';
        else if(s[i] >= 'A' && s[i] <= 'X')
            s[i] += 2;
        else if(s[i] == 'a')
            s[i] = 'y';
        else if(s[i] == 'b')
            s[i] = 'z';
        else if(s[i] >= 'c' && s[i] <= 'z')
            s[i] -= 2;
        cout << s[i]; 
    }
    return 0;
}