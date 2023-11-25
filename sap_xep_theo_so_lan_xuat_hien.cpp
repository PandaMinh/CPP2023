#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x] ++;
        }
        vector<pair<int, int>> vt;
        for(auto x : mp){
            vt.push_back(make_pair(x.first, x.second));
        }
        sort(vt.begin(), vt.end(), cmp);
        for(auto x : vt){
            for(int i = 1; i <= x.second; i++){
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}