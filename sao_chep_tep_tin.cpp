#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream f1;
    ofstream f2;
    f1.open("PTIT.in");
    f2.open("PTIT.out");
    while(!f1.eof()){
        string s;
        getline(f1, s);
        f2 << s << endl;
    }
    f2.close();
    f1.close();
    return 0;
}