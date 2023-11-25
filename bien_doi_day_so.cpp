#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        for(auto &x : a) cin >> x;
        int l = 0;
        int r = n - 1;
        int cnt = 0;
        while(l < r) {
            if(a[l] == a[r]) {
                l++; r--;
            }
            if(a[l] < a[r]) {
                cnt++;
                a[l + 1] += a[l];
                l++;
            }
            if(a[l] > a[r]) {
                cnt++;
                a[r - 1] += a[r];
                r--; 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}