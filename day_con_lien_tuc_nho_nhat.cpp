#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        ll n, x; cin >> n >> x;
        ll a[n] = {};
        for(auto &i : a) cin >> i;
        ll sum = 0;
        int l = INT_MAX;
        bool check = false;
        queue <int> q;
        for(int i = 0; i < n; i++) {
            q.push(a[i]);
            sum += a[i];
            while(sum > x) {
                check = true;
                int s = q.size();
                l = min(l, s);
                ll tmp = q.front();
                q.pop();
                sum -= tmp;
            }
        }
        if(!check) cout << "-1" << endl;
        else cout << l << endl;
    }
    return 0;
}