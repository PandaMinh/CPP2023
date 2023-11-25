#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int a[10000005] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set <int> st;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        int m = 0;
        if(st.size() > 1)
            for(auto x : st)
                if(m < 2){
                    cout << x << " ";
                    m++;
                }
                else   
                    break;
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}