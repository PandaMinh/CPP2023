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
        set <int> st;
        int max = -1e4, min = 1e4;
        for(int i = 0; i < n; i++){
            int x = 0;
            cin >> x;
            st.insert(x);
            if(x < min)
                min = x;
            else if(x > max)
                max = x;
        }
        cout << max - min + 1 - st.size() << endl;
    }
    return 0;
}