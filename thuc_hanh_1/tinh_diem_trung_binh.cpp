#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(double a, double b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    double ans = 0;
    double a[105] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    double max = a[n - 1], min = a[0];
    int N = n;
    for(int i = 0; i < N; i++){
        if(a[i] == min || a[i] == max){
            n--;
        }
        else if(a[i] != min && a[i] != max){
            ans += a[i];
        }
    }
    //cout << n << " " << min << " " << max << endl;
    ans = ans / n;
    cout << fixed << setprecision(2) << ans;
    return 0;
}