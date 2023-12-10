#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int solve(vector<int> m, int n, int sum){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += m[i];
        if(s == sum - s + m[i])
            return i + 1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> m(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> m[i];
            sum += m[i];
        }
        cout << solve(m, n, sum) << endl;
    }
    return 0;
}
