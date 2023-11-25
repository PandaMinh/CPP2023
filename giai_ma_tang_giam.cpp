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
        string s;
        cin >> s;
        stack <int> st;
        int dem = 1;
        st.push(dem);
        for(int i = 0; i < s.size(); i++){
            dem++;
            if(s[i] == 'I') {
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(dem);
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}