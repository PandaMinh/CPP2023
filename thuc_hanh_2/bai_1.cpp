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
        if(s[i] == 'A')
            s[i] = 'Y';
        else if(s[i] == 'B')
            s[i] = 'Z';
        else if(s[i] >= 'C' && s[i] <= 'Z')
            s[i] -= 2;
        else if(s[i] == 'y')
            s[i] = 'a';
        else if(s[i] == 'z')
            s[i] = 'b';
        else if(s[i] >= 'a' && s[i] <= 'x')
            s[i] += 2;
        cout << s[i]; 
    }
    return 0;
}