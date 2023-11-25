#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by Minh
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        char s[20] = {};
        cin >> s;
        int i = 0;
        while(i < strlen(s)){
            if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
                i += 3;
            }
            else{
                cout << s[i];
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}