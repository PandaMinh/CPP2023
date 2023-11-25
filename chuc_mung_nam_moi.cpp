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
    set <string> st;
    while(t--){
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
    return 0;
}