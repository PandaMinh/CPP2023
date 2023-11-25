#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        int chan = 0, le = 0;
        while(ss >> tmp){
            cnt++;
            if((int)(tmp[tmp.length() - 1] - '0') % 2 == 0)
                chan++;
            else  
                le++;
        }
        if((chan > le && cnt % 2 == 0) || (le > chan && cnt % 2 != 0))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}