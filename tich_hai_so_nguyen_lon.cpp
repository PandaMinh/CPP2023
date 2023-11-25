#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

string Sum(string a, string b) {
    if(a.length() > b.length()) {
        b.insert(0, a.length() - b.length(), '0');
    } else {
        a.insert(0, b.length() - a.length(), '0');
    }
    string res = "";
    int tmp = 0;
    for(int i = a.length() - 1; i >= 0; i--) {
        tmp = (a[i] - '0') + (b[i] - '0') + tmp;
        res.insert(0, 1, tmp%10 + '0');
        tmp /= 10;
    }
    if(tmp > 0) res.insert(0, 1, tmp + '0');
    return res;
}

string Mul(char a, string b) {
    int tmp = 0;
    string res = "";
    for(int i = b.length() - 1; i >= 0; i--) {
        tmp = (a - '0') * (b[i] - '0') + tmp;
        res.insert(0, 1, tmp%10 + '0');
        tmp /= 10;
    }
    if(tmp > 0) 
        res.insert(0, 1, tmp + '0');
    return res;
}

void Solve(string a, string b) {
    string res = "";
    string s = "";
    for(int i = a.length() - 1; i >= 0; i--) {
        s = Mul(a[i], b);
        s.insert(s.length(), a.length() - i - 1, '0');
        res = Sum(res, s);
    }
    cout << res << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--)	{
        string a, b; 
        cin >> a >> b;
        Solve(a, b);
    }
    return 0;
}