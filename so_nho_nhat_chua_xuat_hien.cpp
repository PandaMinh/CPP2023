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
        int a[100005] = {};
        int m = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x > 0)
                a[m++] = x;
        }
        sort(a, a + m);
        if(a[0] > 1 || m == 0)
            cout << "1";
        else if(m == 1 && a[0] == 1)
            cout << "2";
        else{
            int l = 0;
            for(int i = 1; i < m; i++){
                if(a[i-1] + 1 < a[i]){
                    l = 1;
                    cout << a[i-1] + 1;
                    break;
                }
            }
            if(l == 0)
                cout << a[n-1] + 1;
        }
        cout << endl;
    }
    return 0;
}