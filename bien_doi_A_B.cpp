#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    int A = 0, B = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A')
            B = min(A, B) + 1;
        else    
            A = min(A, B) + 1;
    }
    cout << A;
    return 0;
}