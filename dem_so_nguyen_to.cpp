#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int a[100005] = {};

void sang(){
    for(int i = 0; i <= 100005; i++){
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= sqrt(100005); i++){
        if(a[i] == 1){
            for(int j = i * i; j <= 100005; j += i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    sang();
    while(t--){
        int n, m;
        cin >> n >> m;
        int ans = 0;
        for(int i = n; i <= m; i++){
            if(a[i])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}