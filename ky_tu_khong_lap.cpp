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
        int a[10005] = {};
        for(int i = 0; i < s.length(); i++){
            a[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(a[s[i]] == 1)
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}