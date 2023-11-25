#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

long long gt[21];

void init(){
    gt[0] = 1;
    for(int i = 1; i <= 20; i++){
        gt[i] = gt[i-1] * i;
    }
}


void solve(){
    int n, r, b, g; cin >> n >> r >> g >> b;
    long long ans = 0;
    for(int i = n ; i >= r; i--){
        for(int j = n - i; j >= b; j--){
            int k = n - i - j;
            if(k >= g){
                ans += gt[n] / (gt[i] * gt[j] * gt[k]);
            }
        }
    }
    cout << ans << endl;
}

int main(){
    init();
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}