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
        int n = 0;
        int tmp = 1;
        for(int i = s.length() - 1; i >= 0; i--){
            n += (s[i] - '0') * tmp;
            tmp *= 2;
            tmp = tmp % 10;
            n = n % 10;
        }
        if(n % 5 == 0)
            cout << "Yes";
        else 
            cout << "No";
        cout << endl;
    }
    return 0;
}