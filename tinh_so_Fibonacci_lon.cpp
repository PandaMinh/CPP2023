#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
// by sunmin

int n;
vector <string> vt(1002);

ll sum(string a, string b){
    if(a.length() > b.length()){
        b.insert(0, a.length() - b.length(), '0');
    }
    else{
        a.insert(0, b.length() - a.length(), '0');
    }
    string res = "";
    int tmp = 0;
    for(int i = a.length() - 1; i >= 0; i--){
        tmp = (a[i] - '0') + (b[i] - '0') + tmp;
        res.insert(0, 1, tmp%10 + '0');
        tmp /= 10;
    }
    if(tmp){
        res.insert(0, 1, tmp%10 + '0');
    }
    ll num = 0;
    for(int i = 0; i < res.length(); i++){
        num = (num*10 + res[i] - '0') % e;
    }
    return num;
}


void fibo(){
    vt[0] = "0";
    vt[1] = "1";
    for(int i = 2; i <= 1001; i++){
        ll x = sum(vt[i - 1], vt[i - 2]);
        vt[i] = to_string(x);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    fibo();
    while(t--){
        cin >> n;
        cout << vt[n] << endl;
    }
    return 0;
}