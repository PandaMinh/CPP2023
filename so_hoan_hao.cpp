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
    while(t--)	{
        ll n; 
        cin >> n;
        vector <ll> vt = {6, 28, 496, 8128};
        vt.push_back(pow(2, 12)*(pow(2, 13) - 1));
        vt.push_back(pow(2, 16)*(pow(2, 17) - 1));
        vt.push_back(pow(2, 18)*(pow(2, 19) - 1));
        bool check = false;
        for(auto x : vt) {
            if(x == n) {
                check = true;
                break;
            }
        }
        cout << check << endl;
    }
    return 0;
}