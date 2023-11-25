#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int solve(int b[], int m) {
    int res = INT_MIN;
    stack <int> st;
    int i = 0;
    while(i < m) {
        if(st.empty() || b[i] >= b[st.top()]) {
            st.push(i);
            i++;
        }
        else {
            int idx = st.top();
            st.pop();
            if(st.empty()) {
                res = max(res, b[idx] * i);
            }
            else {
                res = max(res, b[idx] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty()) {
        int idx = st.top();
        st.pop();
        if(st.empty()) {
            res = max(res, b[idx] * i);
        }
        else {
            res = max(res, b[idx] * (i - st.top() - 1));
        }
    }
    return res;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n, m; cin >> n >> m;
        int a[n][m] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || a[i][j] == 0) continue;
                else {
                    a[i][j] +=  a[i - 1][j];
                }
            }
        }
        int res = INT_MIN;
        for(int i = 0; i < n; i++) {
            int b[m] = {};
            for(int j = 0; j < m; j++) {
                b[j] = a[i][j];
            }
            res = max(res, solve(b, m));
        }
        cout << res << endl;
    }
    return 0;
}