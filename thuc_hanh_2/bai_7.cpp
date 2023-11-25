#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int n = s.length();
        if(n <= 100)
            cout << s;
        else{
            if(s[99] == ' ')
                for(int i = 0; i < 100; i++){
                    cout << s[i];
                }
            else if(s[99] != ' ' && s[100] == ' ')
                for(int i = 0; i < 100; i++){
                    cout << s[i];
                }
            else{
                int k = 99;
                while(s[k] != ' '){
                    k--;
                }
                for(int i = 0; i <= k; i++){
                    cout << s[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}