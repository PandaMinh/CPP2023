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
    while(t--){
        int n;
        cin >> n;
        int a[10005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        string s;
        for(int i = l + 1; i <= r; i++){
            if(a[i - 1] < a[i])
                s += "1";
            else if(a[i - 1] > a[i])
                s += "0";
        }
        if(s.find("01") != -1)
            cout << "No" << endl;
        else    
            cout << "Yes" << endl;
    }
    return 0;
}