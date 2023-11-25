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
    while(t--)	{
        int n; 
        cin >> n;
        vector <int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        b[0] = 0;
        for(int i = 1; i < n; i++) {
            b[i] = INT_MAX;
            for(int j = 0; j < i; j++) {
                if(j + a[j] >= i && b[j] != INT_MAX) {
                    b[i] = b[j] + 1;
                    break;
                }
            }
        }
        if(b[n - 1] != INT_MAX) {
            cout << b[n - 1];
        } else {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}