#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(string a, string b) {
    return a.length() > b.length();
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <string> vt(n);
    for(int i = 0; i < n; i++) {
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end(), cmp);
    int cnt = 0; 
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(vt[i] == vt[j]) {
                cnt += 2;
                continue;
            }
        if(vt[i].find(vt[j]) != string::npos) {
            cnt ++;
        }
        }
    }
    cout << cnt << endl;
    return 0;
}