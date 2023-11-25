#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[105] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    cout << a[0] << " ";
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1])
            cout << a[i] << " ";
    }
    return 0;
}