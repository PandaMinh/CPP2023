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
    //cin.ignore();
    while(t--){
        cin.ignore();
        string s;
        getline(cin, s);
        int k;
        cin >> k;
        set <char> st;
        for(int i = 0; i < s.length(); i++){
            st.insert(s[i]);
        }
        if(26 - st.size() <= k)
            cout << "1" << endl;
        else 
            cout << "0" << endl;
    }
    return 0;
}