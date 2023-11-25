#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct dta {
    int val, pos;
};

bool cmp(dta a, dta b) {
    if(a.val < b.val) return true;
    if(a.val == b.val && a.pos < b.pos) return true;
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        vector <dta> vt(n);
        for(int i = 0; i < n; i++) {
            cin >> vt[i].val;
            vt[i].pos = i;
        } 

        sort(vt.begin(), vt.end(), cmp);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            while(vt[i].pos != i) {
                cnt++;
                swap(vt[i], vt[vt[i].pos]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}