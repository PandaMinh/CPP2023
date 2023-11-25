#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

ll solve(ll a, ll b, ll c){
    if(b == 0) 
        return 0;
    if(b == 1)
        return a % c;
    if(b % 2 == 0)
        return 2 * solve(a, b / 2, c) % c;
    else 
        return (a + 2 * solve(a, b / 2, c)) % c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}