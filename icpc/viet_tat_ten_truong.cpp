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
        stringstream ss(s);
        string tmp;
        char a[10005] = {};
        int n = 0;
        while(ss >> tmp){
            a[n++] = tmp[0];
        }
        for(int i = 0; i < n; i++){
            if(a[i] >= 'A' && a[i] <= 'Z')
                cout << a[i];
        }
        cout << " " << s << endl;
    }
    return 0;
}